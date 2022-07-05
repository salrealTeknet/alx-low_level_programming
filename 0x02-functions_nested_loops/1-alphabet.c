#include "main.h"

/**
 * main - Entry point
 *
 * Return: nothing
 *
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
