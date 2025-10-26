/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:40:07 by leaherre          #+#    #+#             */
/*   Updated: 2025/10/26 15:40:07 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*trim;
	size_t	copy_len;

	if (!s1 || !set)
		return (NULL);
	start = (char *) s1;
	end = (char *)s1 + ft_strlen(s1) - 1;
	if (*start == '\0' || *s1 == '\0')
		return (ft_strdup(""));
	while (ft_strchr(set, *start) != NULL)
		start++;
	while (end >= start && ft_strchr(set, *end) != NULL)
		end--;
	if (start > end)
		return (ft_strdup(""));
	copy_len = end - start + 1;
	trim = (char *)malloc(copy_len + 1);
	if (trim == NULL)
		return (NULL);
	ft_memcpy(trim, start, copy_len);
	trim[copy_len] = '\0';
	return (trim);
}
