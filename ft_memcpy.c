/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:27:49 by leaherre          #+#    #+#             */
/*   Updated: 2025/10/06 18:29:01 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    if (!dst && !src)
        return (NULL);

    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;

    while (n > 0)
    {
        *d = *s; 
        d++;
        s++;
        n--;
    }
    return (dst);
}