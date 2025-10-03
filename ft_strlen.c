/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:29:50 by leaherre          #+#    #+#             */
/*   Updated: 2025/10/01 19:35:43 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char *string = "la42ole";
// 	int len;
// 	len = ft_strlen(string);
// 	printf("strlen = %d", len);
// 	return (0);
// }