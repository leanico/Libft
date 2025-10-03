/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:49:29 by leaherre          #+#    #+#             */
/*   Updated: 2025/09/30 18:58:05 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 00 && str[i] <= 127)
		{
			i++;
		}
		else
		{
			i++;
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>
// int main (void)
// {
// 	char *str = "";
// 	printf("prueba %d", ft_isascii (str));
// 	return (0);
// }