# Integer Overflow in C
This repository demonstrates a common error in C programming: integer overflow.  The code calculates a factorial and has an integer overflow vulnerability if the input is too large. This can lead to unexpected results and program crashes. The solution demonstrates a way to mitigate this by using a larger data type or error handling techniques.

## Bug
The provided C code contains an integer overflow bug. It calculates the factorial, which can exceed the capacity of a standard integer type, leading to unpredictable results.