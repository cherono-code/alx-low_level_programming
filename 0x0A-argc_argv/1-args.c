#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: 'print number of arguments passed'
 * @argc: number of command line arguments
 * @argv: vector of c strings
 * Return: 0
 */
int main(int argc, char *argv[])

{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
