# call_c_function.py
import ctypes

# Load the dynamic library
lib = ctypes.CDLL('./libadd.so')

# Call the C function
result = lib.add(3, 4)
print(f'The result of adding 3 and 4 is: {result}')

