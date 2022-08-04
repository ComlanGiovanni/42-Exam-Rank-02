#include <unistd.h>

int    check_doublon(char *str, char c, int pos)
{
    int    idx;

    idx = 0;
    while (idx < pos)
    {
        if (str[idx] == c)
            return (0);
        idx++;
    }
    return (1);
}

void    inter(char *str1, char *str2)
{
    int    idx1;
    int    idx2;

    idx1 = 0;

    while (str1[idx1] != '\0')
    {
        idx2 = 0;
        while (str2[idx2] != '\0')
        {
            if (str1[idx1] == str2[idx2])
            {
                if(check_doublon(str1, str1[idx1], idx1) == 1)
                {
                    write(1, &str1[idx1],1);
                    break ;
                }
            }
            idx2++;
        }
        idx1++;
    }
}



















#include <unistd.h>

int		check_doubles(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}
void	inter(char *str, char *str1)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str1[j] != '\0')
		{
			if (str[i] == str1[j])
			{
				if (check_doubles(str, str[i], i) == 1)
				{
					write(1, &str[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}
int		main(int ac, char **av)
{

	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}






















#include <unistd.h>

int		check_doubles(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int i;
	int i2;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			i2 = 0;
			while (av[2][i2] != '\0')
			{
				if (av[1][i] == av[2][i2])
				{
					if (check_doubles(av[1], av[1][i], i))
					{
						write(1, &av[1][i], 1);
						break ;
					}
				}
				i2++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

