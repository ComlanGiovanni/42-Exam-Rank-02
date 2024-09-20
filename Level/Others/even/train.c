/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:36:41 by gicomlan          #+#    #+#             */
/*   Updated: 2024/07/24 13:41:58 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1, "0246810\n", 9);
	//ft_putstr_fd("0246810\n", 1)
	return (0);
}
//include for write and for STDOUT
// static void	ft_putstr_fd(char *string, int file_descriptor)
// {
// 	if (file_descriptor >= 0x0)
// 		while (*string)
// 			write(file_descriptor, string++, sizeof(char));
// }
