# Set up the terminal and output file
set terminal pngcairo size 800,600 enhanced font 'Verdana,12'
set output 'histogram.png'

# Set the title and labels
set title "Histogram Plot"
set xlabel "Values"
set ylabel "Frequency"

# Define the bin width
binwidth=0.01

# Define the range
max=5
min=1

# Define the number of bins
bin_count = (max - min + binwidth) / binwidth

# Define the histogram
bin(x,width)=width*floor(x/width) + binwidth/2.0

# Plot the histogram
plot 'gauss_numbers.dat' using (bin($1, binwidth)):(1.0) smooth frequency with boxes title 'Histogram'
