#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0
 */


void print_alphabet(void)
{
char atoz = 'a';
while (atoz <= 'z')
{
_putchar(atoz);
atoz++;
}
_putchar('\n');
}
