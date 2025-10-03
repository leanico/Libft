/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:53:13 by leaherre          #+#    #+#             */
/*   Updated: 2025/09/30 18:53:32 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str [i] >= 0 && str[i] <= 9)
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
// 	printf("prueba %d", ft_isdigit (str));
// 	return (0);
// }