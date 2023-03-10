#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: 'prints the name of program'
 * @argv: vector of c string
 * @argc: number of arguments
 * @argc__attribute__((unused)): unused variable
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);


	return (0);
}
