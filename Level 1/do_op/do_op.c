#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void do_op(int n1, char sign, int n2)
{
	if (sign == '+')
		printf("%i", n1 + n2);
	else if (sign == '-')
		printf("%i", n1 - n2);
	else if (sign == '*')
		printf("%i", n1 * n2);
	else if (sign == '/')
		printf("%i", n1 / n2);
	else
		printf("0");
}

int main(int argc, char **argv)
{

	if (argc == 4)
	{
		do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
	}

	printf("\n");

	return 0;
}