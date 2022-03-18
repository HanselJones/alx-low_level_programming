#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: number.
 *
 * Return: diagonal line on the terminal.
 */

void print_diagonal(int n)
{
	int filas;
	int columns;

	if (n > 0)
	{
		for (filas = 0; filas < n; filas++)
		{
			for (columns = 0; columns <= filas; columns++)
			{
				if (filas == columns)
				{
					_putchar ('\\');
					_putchar ('\n');
				}
				else
				{
					_puthar (' ');
				}
			}
		}
	}
	else
	{
		_putchar ('\n');
	}
}
