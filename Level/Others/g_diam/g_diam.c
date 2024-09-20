#include <unistd.h>
#include <stdlib.h>
#include "g_diam.h"

int				ft_atoi(char *s, int len)
{
	int			total;
	int			i;

	total = 0;
	i = -1;
	while (++i < len)
		total = total * 10 + s[i] - '0';
	return (total);
}

t_vertex		*new_vertex(t_vertex **graph, int val)
{
	t_vertex	*new;
	t_vertex	*tmp;

	tmp = *graph;
	while (tmp)
	{
		if (tmp->a == val)
			return (NULL);
		tmp = tmp->next;
	}
	new = (t_vertex *)malloc(sizeof(t_vertex));
	new->a = val;
	new->current = 0;
	new->next = NULL;
	if (*graph == NULL)
		*graph = new;
	else
		tmp = new;
	return (new);
}

void			g_diam(char *s)
{
	t_vertex	*graph;
	t_vertex	*tmp;
	int			i;

	graph = NULL;
	tmp = graph;
	while (*s)
	{
		i = 0;
		while (s[i] && s[i] >= '0' && s[i] <= '9')
			i++;
		tmp = new_vertex(&graph, ft_atoi(s, i));
		s += i + 1;
		i = 0;
		while (s[i] && s[i] >= '0' && s[i] <= '9')
			i++;
		if (tmp)
		{
			tmp->b[tmp->current] = ft_atoi(s, i);
			tmp->current++;
		}
		s += i + 1;
		tmp = tmp->next;
	}
}

int			main(int argc, char ** argv)
{
	if (argc == 2)
		write(1, "\n", 1);
		//g_diam(argv[1]);
	write(1, "\n", 1);
	return (0);
}
