/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:52:03 by marvin            #+#    #+#             */
/*   Updated: 2025/10/17 21:52:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	size_t	len;
	char	*trim;
	size_t	copy_len;

	start = (char *) s1;
	len = ft_strlen(s1);
	end = (char *)s1 + len - 1;
	if (ft_strchr(set, *start) != NULL)
		return (ft_strdup(""));
	while (ft_strchr(set, *start) != NULL)
		start++;
	while (end < start && ft_strchr(set, *end) != NULL)
		end--;
	copy_len = end - start -1;
	trim = malloc(copy_len + 1)
		if (trim == NULL)
		return (NULL);
	ft_memcpy(trim, start, copy_len);
	trim[copy_len] = '\0';
	return (trim);
}
