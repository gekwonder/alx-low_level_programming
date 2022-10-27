#include <stdio.h>
#include <stdlib.h>

/**
  * print_diagonal - a function that draws a diagonal line on the terminal
  * @n: length of diagonal
  *
  * Return: void
  */
int main(void)
{
	int co, sp;
	int n = -5;

	if (n <= 0)
	{
		printf('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			for (sp = 1; sp < co; sp++)
			{
				printf(' ');
			}
		}

		printf('\\');

		printf('\n');
	}
	return (0);
}
