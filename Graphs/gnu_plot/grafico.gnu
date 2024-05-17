set xlabel 'Tempo (s)'
set ylabel 'Distância (m)'

plot 'dados.dat'

set terminal png size 1600,800 
set output "teste.png"
