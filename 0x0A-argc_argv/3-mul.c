#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multipiplies two numbers
 * @argc: no of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc > 2)
{
int mul;

mul = atoi(argv[1])  * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
