#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;
	i = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] != reject[j])
				j++;
			else
				return i;
		}
		i++;
	}
	return i;
}