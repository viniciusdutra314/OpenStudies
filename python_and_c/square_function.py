import ctypes
from time import time
import os
clibrary=ctypes.CDLL(os.path.join(os.getcwd(),"square_function.so")  )
square=clibrary.square
square.argtypes=[ctypes.c_float]
square.restype=ctypes.c_float
t0=time()
square_c=[square(j) for j in range(1_000_000)]
print(time()-t0);t0=time()
square_python=[j*j for j in range(1_000_000)]
print(time()-t0)