#include "ordalph.h"
#include <unistd.h>
#include <stdlib.h>

int				ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static void		ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

int				ft_strcmp(char *ss1, char *ss2)
{
	char	*s1;
	char	*s2;

	s1 = ft_tolower(ss1);
	s2 = ft_tolower(ss2);
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

static void		print_words(t_words *begin)
{
	while (begin)
	{
		ft_putstr(begin->str);
		if (begin->next)
			write(1, " ", 1);
		begin = begin->next;
	}
}

void			print(t_list *begin)
{
	while (begin)
	{
		print_words(begin->words);
		write(1, "\n", 1);
		begin = begin->next;
	}
}
