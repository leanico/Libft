/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 12:22:45 by marvin            #+#    #+#             */
/*   Updated: 2025/10/12 12:22:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	size_t	original_dst_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	original_dst_len = dst_len;
	if (size <= original_dst_len)
		return (original_dst_len + src_len);
	i = 0;
	while (src[i] != '\0' && dst_len < size -1)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (original_dst_len + src_len);
}
