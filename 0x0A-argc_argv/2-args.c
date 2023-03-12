#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments
 * @argc: no. of arguments
 * @argv: argument
 * Return: O
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
