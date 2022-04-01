#include <stdio.h>

/**
 * main - Prints all arguements received
 * @argc: Arguement count
 * @argv: Arguement vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);
	return (0);
}
