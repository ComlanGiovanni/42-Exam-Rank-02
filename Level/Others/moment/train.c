#include <stdlib.h>

#define SECOND 1
#define MINUTE 60
#define HOUR 3600
#define DAY 86400
#define MONTH 2592000

int ft_strlen(char *str)
{
    return (str && *str ? ft_strlen(str + 1) + 1 : 0);
}

char *ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	idx;

	len_dest = ft_strlen(dest);
	idx = 0;
	while (src[idx] != '\0')
	{
		dest[len_dest] = src[idx];
		len_dest++;
		idx++;
	}
	dest[len_dest] = '\0';
	return (dest);
}

char *small_itoa(unsigned int nb)
{
	char			*value;
	int				idx;
	unsigned int	remaining;

	remaining = nb;
	idx = 1;
	while (nb / 10 && idx++)
		nb /= 10;
	if (!(value = (char*)malloc(sizeof(*value) * (idx + 1))))
		return (NULL);
	value[idx] = '\0';
	value[0] = '0';
	while (--idx >= 0)
	{
		value[idx] = (char)((remaining % 10) + '0');
		remaining /= 10;
	}
	return (value);
}

char *join_str(char *s1, char *s2)
{
	char *time_str;
    int size_str;

    size_str = ft_strlen(s1) + ft_strlen(s2);
	if (!(time_str = (char*)malloc(sizeof(*time_str) * (size_str + 1))))
		return (NULL);
    time_str = ft_strcat(time_str, s1);
    time_str = ft_strcat(time_str, s2);
	return (time_str);
}

char *moment(unsigned int duration)
{
    if (duration >= MONTH)
    {
        if ((duration / MONTH) <= 1)
            return ("1 month ago.");
        else
            return join_str(small_itoa(duration / MONTH), " months ago.");
    }
    else if (duration >= DAY)
    {
        if ((duration / DAY) <= 1)
            return ("1 day ago.");
        else 
            return join_str(small_itoa(duration / DAY), " days ago.");
    }
    else if (duration >= HOUR)
    {
        if ((duration / HOUR) <= 1)
            return ("1 hour ago.");
        else
            return join_str(small_itoa(duration / HOUR), " hours ago.");
    }
    else if (duration >= MINUTE)
    {
        if ((duration / MINUTE) <= 1)
            return ("1 minute ago.");
        else
            return join_str(small_itoa(duration / MINUTE), " minutes ago.");
    }
    else if (duration >= SECOND)
    {
        if ((duration / SECOND) <= 1)
            return ("1 second ago.");
        else
            return join_str( small_itoa(duration / SECOND), " seconds ago.");
    }
    else
        return ("0 seconds ago.");
}

#include <stdio.h>

int main(void)
{
	printf("%s\n", moment(0));
	printf("%s\n", moment(1));
	printf("%s\n", moment(30));
	printf("%s\n", moment(65));
	printf("%s\n", moment(120));
	printf("%s\n", moment(2400));
	printf("%s\n", moment(2592000));
	printf("%s\n", moment(2592000 * 2));
	printf("%s\n", moment(31536000));
	printf("%s\n", moment(31536000 * 4));
	return (0);
}