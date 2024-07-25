#ifndef ORDALPH_H
# define ORDALPH_H

typedef struct		s_words
{
	char			*str;
	struct s_words	*next;
}					t_words;

typedef struct		s_list
{
	int				len;
	t_words			*words;
	struct s_list	*next;
}					t_list;

int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *s);
void		print(t_list *begin);
char		*ft_tolower(char *s);

t_list		*new_list(int len, t_words *words);
t_words		*new_words(char *word);
void		push_list(t_list **begin, t_list *new);
void		push_words(t_words **begin, t_words *new);
void		add_word(t_list **begin, char *str);
void		ord_alphlong(char *s);

#endif /* !ORDALPH_H */
