/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:46:56 by leaherre          #+#    #+#             */
/*   Updated: 2025/10/01 19:26:45 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str [i] >= 'A' && str[i] <= 'Z') 
			|| (str [i] >= 0 && str[i] <= 9))
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
// 	printf("prueba %d", ft_isalnum (str));
// 	return (0);
// }