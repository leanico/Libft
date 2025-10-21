/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:15:15 by marvin            #+#    #+#             */
/*   Updated: 2025/10/19 10:15:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
			count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (count);
}

char	*ft_free(char **mem)
{
	int	i;

	i = 0;
	while (mem[i] != NULL)
	{
		free(mem[i]);
		i++;
	}
	free(mem);
	return (NULL);
}

const char	*ft_extract(const char *s, char c, char **result, int i)
{
	char	*word_start;
	size_t	word_len;

	if (*s != '\0')
	{
		word_start = (char *)s;
		word_len = 0;
		while (*s != '\0' && *s != c)
		{
			s++;
			word_len++;
		}
		result[i] = (char *)malloc(word_len + 1);
		if (result[i] == NULL)
			return (ft_free (result));
		ft_memcpy(result[i], word_start, word_len);
		result[i][word_len] = '\0';
	}
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**result;
	int		i;

	if (!s)
		return (NULL);
	num_words = count_words(s, c);
	result = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < num_words)
	{
		while (*s != '\0' && *s == c)
			s++;
		s = ft_extract(s, c, result, i);
		if (s == NULL)
			return (NULL);
		i++;
	}
	result[num_words] = NULL;
	return (result);
}
