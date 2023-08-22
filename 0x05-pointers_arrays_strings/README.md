# Programs for 0x05. C - Pointers, arrays and strings

**0-reset_to_98.c**
This function takes a pointer to an _int_ as a parameter and updates the value it points to to _98_<br>

- Prototype: _void reset_to_98(int \*n);_<br>

**1-swap.c**
This function swaps the values of two integers<br>

- Prototype: _void swap_int(int \*a, int \*b);_<br>

**2-strlen.c**
This function returns the length of a string<br>

- Prototype: _int \_strlen(char \*s);_<br>

**3-puts.c**
This function prints a string, followed by a new line, to _stdout_<br>

- Prototype: _void \_puts(char \*str);_<br>

**4-print_rev.c**
This function prints a string, in reverse, followed by a new line.<br>

- Prottype: _void print_rev(char \*s);_<br>

**5-rev_string.c**
This function reverses a string<br>

- Prototype: _void rev_string(char \*s);_

**6-puts2.c**
This function prints every other character of a string, starting with the first character, followed by a new line.<br>

- Prototype: _void puts2(char \*str);_

**7-puts_half.c**
This function prints half of a string<br>

- Prototype: _void puts_half(char \*str);_
- The function prints the second half of the string
- If the number of characters is odd, the function should print the last _n\_ characters of the string, where \_n = (length_of_the_string -1) / 2_<br>

**8-print_array.c**
This function prints _n_ elements of an array of integers, followed by a new line<br>

- Prototype: _void print_array(int \*, int n);_<br>
- _n_ is the number of elements of the array to be printed<br>
- I'm allowed to use _printf_<br>

**9-strcpy.c**
This function copies the string pointed by _src_, including the terminating null byte (\0), to the buffer pointed to by _dest_<br>

- Prototype: _char \_strcpy(char \*dest, char \*src);_<br>

* Return value: the pointer to _dest_<br>
