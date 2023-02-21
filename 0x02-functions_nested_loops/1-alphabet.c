#include "main.h"
/**
 * print_alphabet - prints the alphabets
 * Description: a function that prints letters in lower case
 * Return: 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
