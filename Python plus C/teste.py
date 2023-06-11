import ctypes

# Load the DLL
primos_lib = ctypes.CDLL("D:\GitHub\Estudos\Python plus C\primos.exe")

# Define the function signature
primos_lib.primos.argtypes = [ctypes.c_int]

# Call the C function
n = 100  # Example input
primos_lib.primos(n)