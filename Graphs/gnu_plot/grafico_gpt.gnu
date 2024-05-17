# Set output file format and name
set terminal pngcairo enhanced font 'Verdana,12'
set output 'plot.png'

# Set title and labels
set title "2D Plot from dados.dat"
set xlabel "X-Axis"
set ylabel "Y-Axis"

# Plot data from dados.dat
plot 'dados.dat' with lines title 'Data'

