#include "main.h"
/**
 * main - A program that prints all arguments it receives
 * @argc: argument counter
 * @argv: argument values
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
