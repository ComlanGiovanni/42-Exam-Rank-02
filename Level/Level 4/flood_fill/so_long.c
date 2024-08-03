/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:09:27 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/25 16:23:24 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_point	t_point;
typedef enum e_bool		t_bool;

struct					s_point
{
	int					x;
	int					y;
};

enum e_bool
{
	TRUE = 1,
	FALSE = 0
};

t_point	ft_find_char(char **map, t_point size, char c);
char	**ft_make_map(char **zone, t_point size);
t_bool	ft_path_exists(char **tab, t_point size, t_point start, t_point end);
t_bool	ft_is_valid_path(char **tab, t_point size, t_point cur, t_point end);

int	main(void)
{
	t_point size = {10, 7};
	t_point start, end;

	char *ber[] = {
		"1111111111",
		"1000000001",
		"11111111C1",
		"1000E000P1",
		"1S11111111",
		"1000000001",
		"1111111111",
	};
	start = ft_find_char(ber, size, 'P');
	end = ft_find_char(ber, size, 'E');
	printf("Start x->%d y->%d\n", start.x, start.y);
	printf("END x->%d y->%d\n", end.x, end.y);
	char	**map = ft_make_map(ber, size);
	printf("Original grid:\n\n");
	for (int idx = 0; idx < size.y; ++idx)
		printf("%s\n", map[idx]);
	printf("\n");
	if (ft_path_exists(map, size, start, end))
		printf("A valid path exists from 'P' to 'E'.\n");
	else
		printf("No valid path exists from 'P' to 'E'.\n");
	return (EXIT_SUCCESS);
}

t_point	ft_find_char(char **tab, t_point size, char c) {
    for (int y = 0; y < size.y; ++y) {
        for (int x = 0; x < size.x; ++x) {
            if (tab[y][x] == c)
                return (t_point){x, y};
        }
    }
    return (t_point){-1, -1}; // Si non trouvé
}

char	**ft_make_map(char **zone, t_point size)
{
	int		i;
	int		j;
	char	**new;

	i = 0;
	new = (char **)malloc(sizeof(char *) * size.y);
	if (!new)
		return (NULL);
	while (i < size.y)
	{
		new[i] = (char *)malloc((size.x + 1) * sizeof(char));
		if (!new[i])
			return NULL; // free like split;
		j = 0;
		while (j < size.x)
		{
			new[i][j] = zone[i][j];
			j++;
		}
		new[i][size.x] = '\0';
		i++;
	}
	return (new);
}

t_bool	ft_path_exists(char **tab, t_point size, t_point start, t_point end)
{
	return (ft_is_valid_path(tab, size, start, end));
}

t_bool	ft_is_valid_path(char **tab, t_point size, t_point cur, t_point end)
{
	char	temp;

	if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x
		|| tab[cur.y][cur.x] == '1' || tab[cur.y][cur.x] == 'V')
		return (FALSE);
	if (cur.x == end.x && cur.y == end.y)
		return (TRUE);
	temp = tab[cur.y][cur.x];
	tab[cur.y][cur.x] = 'V'; // Marquer comme visité
	// Vérifier les quatre directions
	if (ft_is_valid_path(tab, size, (t_point){cur.x + 1, cur.y}, end) ||
		ft_is_valid_path(tab, size, (t_point){cur.x - 1, cur.y}, end) ||
		ft_is_valid_path(tab, size, (t_point){cur.x, cur.y + 1}, end) ||
		ft_is_valid_path(tab, size, (t_point){cur.x, cur.y - 1}, end))
	{
		tab[cur.y][cur.x] = temp;
			// Restaurer la valeur originale avant de retourner
		return (TRUE);
	}
	tab[cur.y][cur.x] = temp;
		// Restaurer la valeur originale avant de retourner
	return (FALSE);
}
