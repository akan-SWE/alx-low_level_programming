# 0x0F. C - Function pointers

## Table of Content

Projcet files

- [0-print\_name.c](#0-print_name)
- [1-array\_iterator.c](#1-array_iterator)
- [2-int\_index.c](#2-int_index)
- [3](#3)
- [3-calc.h](#3-calc)
- [3-op\_functions.c](#3-op\_functions)
- [3-get\_op\_func.c](#3-get\_op\_func)
- [3-main.c](#3-main)

## 0-print\_name

The function prints a name.

- Prototype: **void print\_name(char \*name, void (\*f)(char \*));**

## 1-array\_iterator

This function executes a function given as a parameter on each element of an array.

- Prototype: **void array\_iterator(int \*array, size\_t size, void (\*action)(int));**

- where **size** is the size of the array

- and **action** is a pointer to the function you need to use

## 2-int\_index

Write a function that searches for an integer.

- Prototype: **int int\_index(int \*array, int size, int (\*cmp)(int));**

- where size is the number of elements in the array array

- **cmp** is a pointer to the function to be used to compare values

- int\_index returns the index of the first element for which the **cmp** function does not **return 0**

- If no element matches, **return -1**

- If **size <= 0**, **return -1**

## 3

This is a program that performs simple operations.

### Usage

*calc num1 operator num2*

operator is one of the following:
+: addition
-: subtraction
*: multiplication
/: division
%: modulo

The program prints the result of the operation, followed by a new line
if the number of arguments is wrong, it prints Error, followed by a new line, and exit with the status 98
if the operator is none of the above, it prints Error, followed by a new line, and exit with the status 99
if the user tries to divide (/ or %) by 0, it prints Error, followed by a new line, and exit with the status 100

### 3-calc

This file contains all the function prototypes and data structures used by the program.

### 3-op\_functions

This file contains the 5 following functions (not more):

- op\_add: returns the sum of a and b. Prototype: **int op\_add(int a, int b);**

- op\_sub: returns the difference of a and b. Prototype: **int op\_sub(int a, int b);**

- op\_mul: returns the product of a and b. Prototype: **int op\_mul(int a, int b);**

- op\_div: returns the result of the division of a by b. Prototype: **int op\_div(int a, int b);**

- op\_mod: returns the remainder of the division of a by b. Prototype: **int op\_mod(int a, int b);**

### 3-get\_op\_func

This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

- Prototype: **int (\*get\_op\_func(char \*s))(int, int);**

- where s is the operator passed as argument to the program

- This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get\_op\_func("+") returns a pointer to the function op\_add

- If s does not match any of the 5 expected operators (+, -, *, /, %), it returns NULL

### 3-main

The main contain the main function only.

- It collects command line arguments for the computation
