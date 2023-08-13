#include <stdio.h>
/**
 * main - function  that prints all arguments it receives.
 * @argc : number of arg
 * @argv : array of arg
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
