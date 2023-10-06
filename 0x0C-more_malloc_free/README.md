# 0x0C. C - More malloc, free

All functions are in their respective files, using malloc to dynamically allocate memory

## Table of Content

Project files

- [0-malloc_checked](#0-malloc_checked)
- [1-string_nconcat](#1-string_nconcat)
- [2-calloc](#2-calloc)
- [3-array_range](#3-array_range)

## 0-malloc\_checked

**malloc\_checked()** - Allocates memory using malloc

**Prototype: void \*malloc_checked(unsigned int b);**

- Returns a pointer to the allocated memory

- if malloc fails, the malloc\_checked function causes a normal process termination with a status value of 98

## 1-string\_nconcat

**string\_nconcat()** - Concatenates two strings.

**Prototype: char \*string_nconcat(char \*s1, char \*s2, unsigned int n);**

The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2.

- If the function fails, it returns NULL.

- If n is greater or equal to the length of s2 then use the entire string s2.

- if NULL is passed, treat it as an empty string

## 2-calloc

**_calloc()** - Allocates memory for an array, using malloc.

**Prototype: void \*_calloc(unsigned int nmemb, unsigned int size);**

The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.

- The memory is set to zero

- If nmemb or size is 0, then _calloc returns NULL

- If malloc fails, then _calloc returns NULL

## 3-array\_range

**array_range()** - Creates an array of integers.

**Prototype: int \*array_range(int min, int max);**

The array created should contain all the values from min (included) to max (included), ordered from min to max
Return: the pointer to the newly created array

- If min > max, return NULL

- If malloc fails, return NULL
