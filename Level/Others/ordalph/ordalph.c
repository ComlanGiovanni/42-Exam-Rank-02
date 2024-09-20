#include "ordalph.h"
#include <stdlib.h>

static char		*ft_strdup(char *s, int start, int end)
{
	char	*new;
	int		i;

	if (s == NULL)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (end - start + 1));
	i = start;
	while (i < end)
	{
		new[i - start] = s[i];
		i++;
	}
	new[i - start] = '\0';
	return (new);
}

int				ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char			*ft_tolower(char *s)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + i));
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			new[i] = s[i] + 32;
		else
			new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

void			ord_alphlong(char *s)
{
	t_list	*begin;
	int		start;
	int		len;
	int		i;

	i = 0;
	start = 0;
	begin = NULL;
	while (s[i])
	{
		if (ft_isalpha(s[i]))
		{
			start = i;
			len = 0;
			while (s[i + len] && ft_isalpha(s[i + len]))
				len++;
			i += len;
			add_word(&begin, ft_strdup(s, start, i));
		}
		else
			i++;
	}
	print(begin);
}
