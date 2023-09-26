#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
	char **split;
	int i = 0;
	int row = 0;
	int column = 0;

	split = (char **)malloc(sizeof(char) * 256);
	if (!split)
		return 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		column = 0;
		split[row] = malloc(sizeof(char) * 4000);
		if (!split[row])
			return 0;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			split[row][column] = str[i];
			i++;
			column++;
		}
		split[row][column] = '\0';
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		row++;
	}
	split[row] = NULL;
	return (split);
}

/* int main()
{
	char *input_str = "three words apart";
	char **result = ft_split(input_str);

	if (result == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}

	// Print the array of strings
	for (int i = 0; result[i] != NULL; i++)
	{
		printf("%s\n", result[i]);
	}

	// Free the allocated memory
	for (int i = 0; result[i] != NULL; i++)
	{
		free(result[i]);
	}
	free(result);

	return 0;
} */