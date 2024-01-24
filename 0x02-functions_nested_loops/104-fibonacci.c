#include <stdio.h>

#define MAX_DIGITS 21

/**
 * addArrays - Adds array (@a and @b) and stores inside @result
 *
 * @result: The result of the addition of the arrays
 * @a: the first array
 * @b: the second array
 *
 * Return: void
 */
void addArrays(int result[], int a[], int b[])
{
	int carry = 0, i;

	for (i = MAX_DIGITS - 1; i >= 0; i--)
	{
		int sum = a[i] + b[i] + carry;

		result[i] = sum % 10;
		carry = sum / 10;
	}
}

/**
 * copyArray - Copies each element of an array to another array
 * from @src to @dest
 *
 * @dest: where each element will be copied to
 * @src: where each element will be copied from
 *
 * Return: void
 */
void copyArray(int dest[], int src[])
{
	int i;

	for (i = 0; i < MAX_DIGITS; i++)
		dest[i] = src[i];
}

/**
 * printArray - prints the element of an array
 *
 * @arr: the array
 *
 * Return: void
 */
void printArray(int arr[])
{
	int i = 0;

	while (i < MAX_DIGITS && arr[i] == 0)
		i++;

	for (; i < MAX_DIGITS; i++)
		printf("%d", arr[i]);

	printf(", ");
}

/**
 * print_fibonacci_To_98 - prints the first 98 fibonacci sequence starting from
 * 1 and 2
 *
 * Return: void
 */
void print_fibonacci_To_98(void)
{
	int a[MAX_DIGITS] = {0}, i;
	int b[MAX_DIGITS] = {0};
	int result[MAX_DIGITS] = {0};

	a[MAX_DIGITS - 1] = 1;
	b[MAX_DIGITS - 1] = 2;

	printf("1, 2, ");

	for (i = 3; i < 97; i++)
	{
		addArrays(result, a, b);
		copyArray(a, b);
		copyArray(b, result);

		printArray(result);
	}

	/* print the 98th number */
	addArrays(result, a, b);
	for (i = 0; i < MAX_DIGITS; i++)
		printf("%d", result[i]);

	putchar('\n');
}

/**
 * main - Starts the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci_To_98();
	return (0);
}
