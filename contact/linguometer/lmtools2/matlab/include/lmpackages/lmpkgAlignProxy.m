function lmpkgAlignProxy(seq, wd0, wd1)

for wd = wd0:wd1
	data = lmpkgAlign(seq, wd, 1);
	
	file_data = sprintf('seq_%.4d/wd_%.4d.mat', seq, wd);
	printf('[lmpkgAlignProxy] Saving data: %s\n', file_data);
	save(file_data, '-struct', 'data');
	clear data;
    clear file_data;
    clear global;
end