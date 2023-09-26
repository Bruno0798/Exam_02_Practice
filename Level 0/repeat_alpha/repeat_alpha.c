#include <unistd.h>

void repeat_print(char c, int times)
{
	int i;
	i = 0;

	while (i < times)
	{
		write(1, &c, 1);
		i++;
	}
}

void repeat_alpha(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			repeat_print(str[i], (str[i] - 96));
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			repeat_print(str[i], (str[i] - 64));
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);

	return 0;
}