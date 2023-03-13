#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: prints all the arguments it receives
 * @argc: number of arguments
 * @argv: vector of c arguments
 * Return: 0 always
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
