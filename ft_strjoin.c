/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:39:27 by leaherre          #+#    #+#             */
/*   Updated: 2025/10/26 15:39:27 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	len3;
	char	*s3;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len3 = len1 + len2;
	s3 = malloc(len3 + 1);
	if (s3 == NULL)
		return (NULL);
	ft_memcpy(s3, s1, len1);
	ft_memcpy(s3 + len1, s2, len2);
	s3[len3] = '\0';
	return (s3);
}
