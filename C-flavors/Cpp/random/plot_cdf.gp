set terminal pngcairo size 800,600 enhanced font 'Verdana,12'
set output 'cdf_gauss.png'
set title "CDF gaussiana"
set xlabel "x"
set ylabel "CDF(x)"
set grid
plot 'gauss_cdf.dat' smooth bezier