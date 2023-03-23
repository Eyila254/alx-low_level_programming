#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * Return: All good
 */
int main(void)
{
	char num;
	int letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter < 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
