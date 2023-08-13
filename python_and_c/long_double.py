import ctypes
import os
clibrary=ctypes.CDLL(os.path.join(os.getcwd(),"long_double.so"))

euler=clibrary.euler
euler.argtypes=[ctypes.c_int]
euler.restype=ctypes.c_longdouble
valor=euler(1000)
printar=clibrary.print_long_double
printar.argtypes=[ctypes.c_longdouble]
printar.restype=ctypes.c_void_p
printar(valor)