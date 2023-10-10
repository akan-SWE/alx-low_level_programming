# 0x0E. C - Structures, typedef

Functions implementation and structures are included in it respective file for this task.

## Table Of Content

- [dog.h](#dog_h)
- [1-init_dog.c](#1-init_dog)
- [2-print_dog.c](#2-print_dog)
- [dog.h](#dog_h)
- [4-new_dog.c](#4-new_dog)
- [5-free_dog.c](#5-free_dog)

## dog_h

contains a definition of struct dog with the following elements:

- name, type = char *
- age, type = float
- owner, type = char *

## 1-init\_dog

The init\_dog function that initializes a variable of type struct dog

Prototype: **void init\_dog(struct dog \*d, char \*name, float age, char \*owner);**

## 2-print\_dog

print\_dog function prints a struct dog

Prototype: **void print\_dog(struct dog \*d);**

- If an element of d is NULL it prints (nil) instead of the element. (if name is NULL, print Name: (nil))
- If d is NULL print nothing.

## dog_h

Defines a new type dog\_t as a new name for the type struct dog.

## 4-new\_dog

new\_dog function creates a new dog.

Prototype: **dog_t \*new_dog(char \*name, float age, char \*owner);**

- Return NULL if the function fails

## 5-free\_dog

free\_dog function frees dogs.

Prototype: **void free\_dog(dog\_t \*d);**
