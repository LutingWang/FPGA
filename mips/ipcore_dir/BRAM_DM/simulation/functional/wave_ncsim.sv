

 
 
 




window new WaveWindow  -name  "Waves for BMG Example Design"
waveform  using  "Waves for BMG Example Design"

      waveform add -signals /BRAM_DM_tb/status
      waveform add -signals /BRAM_DM_tb/BRAM_DM_synth_inst/bmg_port/CLKA
      waveform add -signals /BRAM_DM_tb/BRAM_DM_synth_inst/bmg_port/ADDRA
      waveform add -signals /BRAM_DM_tb/BRAM_DM_synth_inst/bmg_port/DINA
      waveform add -signals /BRAM_DM_tb/BRAM_DM_synth_inst/bmg_port/WEA
      waveform add -signals /BRAM_DM_tb/BRAM_DM_synth_inst/bmg_port/DOUTA

console submit -using simulator -wait no "run"
