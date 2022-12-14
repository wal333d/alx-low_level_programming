#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 * main - Comment
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
