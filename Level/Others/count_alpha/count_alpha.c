#include <stdio.h>

int		is_used(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int		is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		count_and_fill(char *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (is_upper(c))
	{
		while (str[i])
		{
			if (str[i] == c)
				count++;
			i++;
		}
		i = 0;
		while (str[i])
		{
			if (str[i] == c + 32)
				count++;
			i++;
		}
	}
	else
	{	
		while (str[i])
		{
			if (str[i] == c)
				count++;
			i++;
		}
		i = 0;
		while (str[i])
		{
			if (str[i] == c - 32)
				count++;
			i++;
		}
	}
	return (count);
}

int		count_used_letters(char *str)
{
	int		i;
	int		j;
	int		count;
	char	used[52];

	i = 0;
	j = 0;
	count = 0;
	while (str[i])
	{
		if (is_alpha(str[i]) && !is_used(used, str[i])) 
		{
			count++;
			if (is_upper(str[i]))
			{
				used[j++] = str[i];
			    used[j++] = str[i] + 32;	
			}
			else
			{
				used[j++] = str[i];
			    used[j++] = str[i] - 32;	
			}
		}
		i++;
	}
	return (count);
}

void	count_alpha(char *str)
{
	int		i;
	int		j;
	char	used[256];
	int		count;
	int		count_used;

	count = 0;
	count_used = count_used_letters(str);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (is_alpha(str[i]) && !is_used(used, str[i])) 
		{
			count++;
			if (is_upper(str[i]))
			{
				if (count < count_used)
					printf("%d%c, ", count_and_fill(str, str[i]), str[i] + 32);
				else
					printf("%d%c", count_and_fill(str, str[i]), str[i] + 32);
				used[j++] = str[i];
			    used[j++] = str[i] + 32;	
			}
			else
			{
				if (count < count_used)
					printf("%d%c, ", count_and_fill(str, str[i]), str[i]);
				else
					printf("%d%c", count_and_fill(str, str[i]), str[i]);
				used[j++] = str[i];
			    used[j++] = str[i] - 32;	
			}
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	count_alpha(argv[1]);
	printf("\n");
}