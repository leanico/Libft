/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:00:43 by leaherre          #+#    #+#             */
/*   Updated: 2025/09/30 19:01:13 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
// 	char *str = "fjfjdbfdsç";
// 	printf("prueba %d", ft_isprint (str));
// 	return (0);
// }