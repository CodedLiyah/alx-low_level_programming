0x0F. C - Function pointers

what is function pointers ?
Function pointers in C are variables that can store the memory address of functions and can be used in a program to create a function call to functions pointed by them.

0. What's my name
Write a function that prints a name.

Prototype: void print_name(char *name, void (*f)(char *))
 
If you spend too much time thinking about a thing, you'll never get it done
mandatory
Write a function that executes a function given as a parameter on each element of an array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
where size is the size of the array
and action is a pointer to the function you need to use

To hell with circumstances; I create opportunities
mandatory
Write a function that searches for an integer.

Prototype: int int_index(int *array, int size, int (*cmp)(int));
where size is the number of elements in the array array
cmp is a pointer to the function to be used to compare values
int_index returns the index of the first element for which the cmp function does not return 0
If no element matches, return -1
If size <= 0, return -1

A goal is not always meant to be reached, it often serves simply as something to aim at
mandatory
Write a program that performs simple operations.

You are allowed to use the standard library
Usage: calc num1 operator num2

3-calc.h 3-op_functions.c 3-get_op_func.c 3-main.c

Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
#advanced
Write a program that prints the opcodes of its own main function.

Usage: ./main number_of_bytes
