#include <stdio.h>
#include <stdlib.h>

/**
 * isInt - Checks if s is an interger
 * @s: string to check.
 * Return: Always 0.(success)
 * Return: Always 1.(Error)
 */
int isInt(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
/**
 * main - adds the positive numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	while (--argc)
	{
		if (isInt(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
