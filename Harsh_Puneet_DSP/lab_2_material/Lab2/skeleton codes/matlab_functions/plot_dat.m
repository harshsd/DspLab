%function [] = plot_dat(filenamee)
%plot_dat Plot the data from the specified .dat file filled with integers
%   The .dat file should be in the same file as the function.
%   You will have to zoom into the plot to appreciate it.
%   Change the %d to suitable format specifier to view .dat files with
%   floating point or any other format values.
filename = 'sine_out.dat';
fid = fopen(filename, 'r');
input_data=fscanf(fid,'%d');
input_data = input_data(10:110);
figure, plot(input_data);
fclose(fid);
%end