
 
 
 




#!/bin/sh

# Clean up the results directory
rm -rf results
mkdir results

#Synthesize the Wrapper Files

echo 'Synthesizing example design with XST';
xst -ifn xst.scr
cp BRAM_IM_exdes.ngc ./results/


# Copy the netlist generated by Coregen
echo 'Copying files from the netlist directory to the results directory'
cp ../../BRAM_IM.ngc results/

#  Copy the constraints files generated by Coregen
echo 'Copying files from constraints directory to results directory'
cp ../example_design/BRAM_IM_exdes.ucf results/

cd results

echo 'Running ngdbuild'
ngdbuild -p xc6slx100-fgg676-2 BRAM_IM_exdes

echo 'Running map'
map BRAM_IM_exdes -o mapped.ncd -pr i

echo 'Running par'
par mapped.ncd routed.ncd

echo 'Running trce'
trce -e 10 routed.ncd mapped.pcf -o routed

echo 'Running design through bitgen'
bitgen -w routed

echo 'Running netgen to create gate level Verilog model'
netgen -ofmt verilog -sim -tm BRAM_IM_exdes -pcf mapped.pcf -w -sdf_anno false routed.ncd routed.v
