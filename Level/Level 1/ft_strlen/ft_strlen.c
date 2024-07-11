/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:49:06 by gcomlan           #+#    #+#             */
/*   Updated: 2024/04/17 16:44:08 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

/*		Other short or long way to do

			Random strlen here look if you want to see bullshit XD

int	ft_strlen(char	*str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}
int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	if (str == NULL)
		return (0);
	while (str[index] != '\0')
		index++;
	return (index);
}

int	ft_strlen(char	*str)
{
	int	size;

	size = 0;
	if (!str)
		return (0);
	while (str[size++] != '\0')
		;
	return (size - 1);
}

int	ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str != '\0')
	{
		str++;
		size++;
	}
	return (size);
}

int	ft_strlen(char	*str)
{
	int	index;
	int	length;

	index = 0;
	while (str[index])
		index++;
	length = index;
	return (length);
}

int ft_strlen(char *str)
{
	return(str && *str ? ft_strlen(str + 1) + 1 : 0);
}

int	ft_strlen(char *str)
{
	char	*end_str_ptr;

	if (!str)
		return (0);
	end_str_ptr = str;
	while (*end_str_ptr)
		end_str_ptr++;
	return (end_str_ptr - str);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	if (str == NULL)
		return (0);
	while (str[index++] != '\0')
		;
	return (index - 1);
}

// ||

int	ft_strlen(char *str)
{
	int	index;

	if (str == ((void *) 0))
		return (0);
	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

*/
