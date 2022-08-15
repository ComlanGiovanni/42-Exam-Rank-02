/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:55:19 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/11 19:31:47 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdlib.h>
#include <stdio.h> //malloc protection isn't required for the exam

char	*ft_itoa_base(int value, int base)
{
	char	*s;
	long	n;
	int		sign;
	int		i;

	n = (value < 0) ? -(long)value : value;
	sign = (value < 0 && base == 10) ? -1 : 0;
	i = (sign == -1) ? 2 : 1;
	while ((n /= base) >= 1)
		i++;
	s = (char*)malloc(sizeof(char) * (i + 1));
	s[i] = '\0';
	n = (value < 0) ? -(long)value : value;
	while (i-- + sign)
	{
		s[i] = (n % base < 10) ? n % base + '0' : n % base + 'A' - 10;
		n /= base;
	}
	(i == 0) ? s[i] = '-' : 0;
	return (s);
}

int		main(int ac, char **av)//
{
	if (ac == 3)//
		printf("%s", ft_itoa_base(atoi(av[1]), atoi(av[2])));//
	return (1);//
}
*/


/*
#include <stdlib.h>

char		*ft_itoa_base(int value, int base)
{
	int		len;
	long	nbr;
	char	*pointer;
	char	*base_string = "0123456789ABCDEF";

	if (value == 0)
		return ("0");
	len = 0;
	nbr = value;
	while (nbr)
	{
		nbr /= base;
		len += 1;
	}
	nbr = value;
	if (nbr < 0)
	{
		if (base == 10)
			len += 1;
		nbr *= -1;
	}
	if (!(pointer = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	pointer[len] = '\0';
	while (nbr)
	{
		pointer[--len] = base_string[nbr % base];
		nbr /= base;
	}
	if (value < 0 && base == 10)
		pointer[0] = '-';
	return (pointer);
}
*/


/*
#include <stdlib.h>

int		ft_nbr_len(int nb, int base)
{
	int i;

	i = 0;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb /= base;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*cpy;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	cpy = (char*)malloc(sizeof(char) * len);
	if (cpy == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_itoa_base(int value, int base)
{
	int		i;
	int		s;
	int		len;
	char	*radix;
	char	*result;

	i = 0;
	s = 0;
	len = 0;
	radix = "0123456789ABCDEF";
	if (value == 0)
		return (ft_strdup("0"));
	if (base == 10 && value == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_nbr_len(value, base);
	if (base == 10 && value < 0)
		s = 1;
	result = (char*)malloc(sizeof(char) * (len + s + 1));
	if (result == NULL)
		return (NULL);
	if (s == 1)
	{
		result[0] = '-';
		len++;
	}
	result[len] = '\0';
	if (value < 0)
		value *= -1;
	while (len > s)
	{
		result[len - 1] = radix[value % base];
		value /= base;
		len--;
	}
	return (result);
}
*/


/*
char	*ft_itoa_base(int value, int base)
{
	int		i;
	int		j;
	char	temp[16];
	char	*final;

	i = 0;
	if ((base >= 2))
	{
		if (value < 0)
		{
			value = -value;
			temp[i] = '-';
			i++;
		}
		while (value)
		{
			temp[i] = value % base;
			value /= base;
			i++;
		}
		if ((final = (char *)malloc(sizeof(char) * (i + 1))) == ((void *)0))
			return (((void *)0));
		if ((temp[0] == '-'))
			final[0] = temp[0];
		j = 1;
		while (i > 1)
		{
			--i;
			if (temp[i] < 10)
				final[j] = temp[i] + '0';
			if (temp[i] >= 10)
				final[j] = temp[i] - 10 + 'A';
			j++;
		}
		final[j] = '\0';
	}
	return (final);
}
*/
