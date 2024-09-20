#include <stdlib.h>

#define SECOND 1
#define MINUTE 60
#define HOUR 3600
#define DAY 86400
#define MONTH 2592000

int				len(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_strlen(char *str)
{
    return (str && *str ? ft_strlen(str + 1) + 1 : 0);
}

char			*small_itoa(unsigned int nb)
{
	char			*value;
	int				length;
	unsigned int	remaining;

	remaining = nb;
	length = 1;
	while (nb / 10 && length++)
		nb /= 10;
	if (!(value = (char*)malloc(sizeof(*value) * (length + 1))))
		return (NULL);
	value[length] = '\0';
	value[0] = '0';
	while (--length >= 0)
	{
		value[length] = (char)((remaining % 10) + '0');
		remaining /= 10;
	}
	return (value);
}

char			*ft_strjoin(char *s1, char *s2)
{
	int				i;
	char			*time;

	i = 0;
	if (!(time = (char*)malloc(sizeof(*time) * (len(s1) + len(s2) + 1))))
		return (NULL);
	while (*s1)
		time[i++] = *s1++;
	while (*s2)
		time[i++] = *s2++;
	time[i] = '\0';
	return (time);
}

char			*moment(unsigned int duration)
{
	if (duration >= MONTH)
		return (((duration / MONTH) <= 1 ? "1 month ago."
			: ft_strjoin(small_itoa(duration / MONTH), " months ago.")));
	else if (duration >= DAY)
		return (((duration / DAY) <= 1 ? "1 day ago."
			: ft_strjoin(small_itoa(duration / DAY), " days ago.")));
	else if (duration >= HOUR)
		return (((duration / HOUR) <= 1 ? "1 hour ago."
			: ft_strjoin(small_itoa(duration / HOUR), " hours ago.")));
	else if (duration >= MINUTE)
		return (((duration / MINUTE) <= 1 ? "1 minute ago."
			: ft_strjoin(small_itoa(duration / MINUTE), " mintutes ago.")));
	else if (duration >= SECOND)
		return (((duration / SECOND) <= 1 ? "1 second ago."
			: ft_strjoin(small_itoa(duration / SECOND), " seconds ago.")));
	else
		return ("0 seconds ago.");
}


int main(void)
{
	moment(0);
	moment(1);
	moment(30);
	moment(65);
	moment(120);
	moment(2400);
	moment(3735);
	return (0);
}