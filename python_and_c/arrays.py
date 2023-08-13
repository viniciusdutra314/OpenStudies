#https://www.youtube.com/watch?v=-6qW6gC6TuM&list=PLHwXkLexR9MCqqr5hD_8o5rbSXYHtfFiB&index=4
import ctypes
import os
clibrary=ctypes.CDLL(os.path.join(os.getcwd(),"arrays.so"))
N=100

values=(ctypes.c_int *N)()

for i in range(N):
    values[i]=i+1
#gaussian sum (1,100)
print(clibrary.sumArray(values,N))