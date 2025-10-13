/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:50:19 by marvin            #+#    #+#             */
/*   Updated: 2025/10/13 20:50:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(const char *s)
{
    size_t  len;
    char    *ptr;

    len = ft_strlen(s);

    ptr = (char *)malloc(len + 1);

    if (ptr == NULL)
        return (NULL);

    ft_memcpy(ptr, s, len + 1); 
    return (ptr);
}
