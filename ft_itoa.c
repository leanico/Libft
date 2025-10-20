/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:59:08 by marvin            #+#    #+#             */
/*   Updated: 2025/10/20 10:59:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(int n)
{
	int		len;
	long	copy;

	copy = n;
	len = 0;
	if (copy < 0)
	{
		len = 1;
		copy = copy * -1;
	}
	if (copy == 0)
		len = 1;
	while (copy > 0)
	{
		copy = copy / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	copy;
	char	*str;
	int		i;

	copy = n;
	len = ft_len(n);
	str = (char *) malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		copy = copy * -1;
	str[len] = '\0';
	i = len - 1;
	if (copy == 0)
		str[0] = '0';
	while (copy > 0)
	{
		str[i] = ((copy % 10) + '0');
		copy = copy / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
