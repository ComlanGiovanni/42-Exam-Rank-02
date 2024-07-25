#include <unistd.h>

int ft_strlen(char *str)
{
    return (str && *str ? ft_strlen(str + 1) + 1 : 0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strncmp(char *test, char *ref, int n)
{
	int i = 0;

	while (i < n && test[i] && ref[i] && test[i] == ref[i])
		++i;
	if (i == n)
		return (0);
	return (test[i] - ref[i]);
}

int		substrn(char *needle, int test_len, char *haystack)
{
	int hlen = ft_strlen(haystack);
	for (int i = 0; i + test_len <= hlen; ++i)
	{
		if (ft_strncmp(needle, &haystack[i], test_len) == 0)
			return (1);
	}
	return (0);
}

void	str_maxlenoc(int argc, char **argv)
{
	int success;
	int max_len = ft_strlen(argv[0]);

	// For each length of substr of 0th arg, starting with max len
	for (int test_len = max_len; test_len > 0; --test_len)
	{
		// For each starting position in 0th arg, starting with 0th
		for (int start = 0; start + test_len <= max_len; ++start)
		{
			success = 1;
			//for each other argument, check if test str is substr of other arg
			for (int arg = 1; arg < argc; ++arg)
			{
				// Check if test str is substr of current arg
				if (substrn(&argv[0][start], test_len, argv[arg]) == 0)
				{
					success = 0;
					break;	// Unnecessary, but it will save a few loops
				}
			}
			if (success == 1)
			{
				write(1, &argv[0][start], test_len);
				return;
			}
		}
	}
}

int main(int argc, char **argv)
{
	if (argc >= 2)
		str_maxlenoc(argc - 1, &argv[1]);
	ft_putchar('\n');
}
