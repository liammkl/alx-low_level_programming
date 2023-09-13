Create a function that displays a name.
Function Prototype: void display_name(char *name, void (*printer)(char *));
Implement a function that applies a specified function to each element of an array.
Function Prototype: void apply_to_array(int *array, size_t size, void (*function)(int));
Develop a function that searches for an integer in an array.
Function Prototype: int find_integer(int *array, int size, int (*comparator)(int));
Create a program for basic arithmetic operations with integers.
Usage: calc num1 operator num2
Assuming num1 and num2 are integers, convert them from strings to integers using atoi.
The operator can be one of the following:
+: addition
-: subtraction
*: multiplication
/: division
%: modulo
The program will display the result of the operation followed by a newline.
Error handling:
If the number of arguments is incorrect, print "Error" followed by a newline and exit with status 98.
If the operator is not one of the specified operators, print "Error" followed by a newline and exit with status 99.
If division (/ or %) by zero is attempted, print "Error" followed by a newline and exit with status 100.
File Structure:
3-calc.h: Contains function prototypes and data structures used in the program.
3-op_functions.c: Contains the following functions:
op_add: Returns the sum of two integers.
op_sub: Returns the difference of two integers.
op_mul: Returns the product of two integers.
op_div: Returns the result of integer division.
op_mod: Returns the remainder of integer division.
3-get_op_func.c: Contains a function get_op_func that selects the appropriate operation function based on the operator provided as an argument.
3-main.c: Contains the main function of the program, responsible for handling user input, error checking, and invoking the appropriate operation function.
Develop a program that prints the opcodes of its own main function.
Usage: ./main number_of_bytes
Output format:
Print the opcodes in hexadecimal, lowercase.
Each opcode is represented by two characters.
End the listing with a newline.
Error handling:
If the number of arguments is incorrect, print "Error" followed by a newline and exit with status 1.
If the number of bytes is negative, print "Error" followed by a newline and exit with status 2.
You may use printf and atoi to implement this program
