#include <stdio.h>

/**
 * main - Print all possible combinations of single digit numbers
 * numbers should be in ascending order
 * use only putchar function
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
