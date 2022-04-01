#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 1 (Fail)
 * Return: Always 0 (Success)
 */
{
(void)argc;

if (argc != 3)
{
	printf("Error\n");
	return (1);
}
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
