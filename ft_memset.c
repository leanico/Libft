/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:09:58 by leaherre          #+#    #+#             */
/*   Updated: 2025/10/06 18:22:18 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	valor;
	unsigned char	*p;
	size_t			i;

	valor = (unsigned char)c;
	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = valor;
		i++;
	}
	return (s);
}
