#include <unistd.h>

int			ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int			ft_strstr(char *s1, char *s2, int n)
{
	int		i;

	if (!s1 || !s2)
		return (0);
	while (*s2)
	{
		i = 0;
		while (s1[i] && s2[i] && i < n)
		{
			if (s1[i] != s2[i])
				break ;
			i++;
		}
		if (i == n || !s1[i])
			return (1);
		s2++;
	}
	return (0);
}

void		str_maxlenoc(int nb, char **tab)
{
	char	*test;
	int		i_j_m_l_i[5] = {-1, -1, 0, 1, 0};

	test = tab[0];
	while (++i_j_m_l_i[1] < ft_strlen(tab[0]))
	{
		while (i_j_m_l_i[1] + i_j_m_l_i[3] <= ft_strlen(tab[0]))
		{
			i_j_m_l_i[0] = -1;
			while (++i_j_m_l_i[0] < nb)
			{
				if (!ft_strstr(&test[i_j_m_l_i[1]], tab[i_j_m_l_i[0]], i_j_m_l_i[3]))
					break ;
			}
			if (i_j_m_l_i[0] < nb)
				break ;
			if (i_j_m_l_i[3] > i_j_m_l_i[2])
			{
				i_j_m_l_i[2] = i_j_m_l_i[3];
				i_j_m_l_i[4] = i_j_m_l_i[1];
			}
			i_j_m_l_i[3]++;
		}
	}
	write(1, &test[i_j_m_l_i[4]], i_j_m_l_i[3] - 1);
}

int			main(int argc, char **argv)
{
	if (argc > 1)
		str_maxlenoc(argc - 1, &argv[1]);
	write(1, "\n", 1);
	return (0);
}