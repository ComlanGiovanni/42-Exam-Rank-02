#ifndef G_DIAM_H
# define G_DIAM_H

# define MAX	1024	

typedef struct		s_vertex
{
	int				a;
	int				b[MAX];
	int				current;
	int				prev[MAX];
	struct s_vertex	*next;
}					t_vertex;

#endif /* !G_DIAM_H *
