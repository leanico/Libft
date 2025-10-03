/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:46:09 by leaherre          #+#    #+#             */
/*   Updated: 2025/09/30 18:49:25 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str [i] >= 'A' && str[i] <= 'Z'))
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
// 	printf("prueba %d", ft_isalpha (str));
// 	return (0);
// }