# 0x0B-malloc\_free

A clear description of each project file, in **0x0B-malloc_free** project. All of the functions are implemented
by allocating memory dynamically from the heap with **malloc** and deallocating with **free**

## Table of content

Project files

- [0-create\_array.c](#0-create_array)
- [1-strdup.c](#1-strdup)
- [2-str\_concat.c](#2-str\_concat)
- [3-alloc\_grid.c](#3-alloc\_grid)
- [4-free\_grid.c](#4-free_grid)

## 0-create\_array

This function creates an array of chars, and initializes it with a specific value.

- Prototype

````c
char *create_array(unsigned int size, char c);
````

- Returns **NULL** if size = **0**
- Returns a pointer to the array, or **NULL** if it fails

## 1-strdup

This function returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- Prototype

````c
char *_strdup(char *str);
````

- ***\_strdup()** function returns a pointer to a new string which is a duplicate of the string **str**
- Returns **NULL** if str = NULL
- Returns NULL if insufficient memory was available or allocation of memory failed

## 2-str\_concat

This function concatenates two strings.

- Prototype:

````c
char *str_concat(char *s1, char *s2);
````

- The returned pointer contains a newly allocated space in memory which contains the contents of **s1**, followed by the contents of **s2**, and null-terminated

- if **NULL** is passed, it treated as an empty string
- Returns **NULL** on failure

## 3-alloc\_grid

This function returns a pointer to a 2 dimensional array of integers.

- Prototype

````c
int **alloc_grid(int width, int height);
````

- Each element of the grid is initialized to **0**
- The function returns **NULL** on failure
- if **width** or **height** is **0** or negative, return **NULL**

## 4-free\_grid

This function frees a 2 dimensional grid previously created by alloc\_grid function.

- Prototype

````c
void free_grid(int **grid, int height);
````
