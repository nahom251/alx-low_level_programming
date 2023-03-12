#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
	/**
	 * checknum - check - string there are digit
	 * @str: array str
	 * Return: 0
	 */
	int checknum(char *str)
	{
		unsigned int count;


		count = 0;
		while (count < strlen(str))


		{
			if (!isdigit(str[count]))
			{
				return (0);
			}


			count++;
		}
		return (1);
	}


	/**
	 * main - add the program
	 * @argc: Count arguments
	 * @argv: Arguments
	 *
	 * Return: 0
	 */


	int main(int argc, char *argv[])


	{


		/*Declaring variables*/
		int count;
		int sum = 0;


		count = 1;
		while (count < argc)
		{
			if (checknum(argv[count]))


			{ 
				sum += atoi(argv[count]);
			}


			
			else
			{
				printf("Error\n");
				return (1);
			}


			count++;
		}


		printf("%d\n", sum);


		return (0);
	}

