/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 16:12:41 by marvin            #+#    #+#             */
/*   Updated: 2025/10/12 16:12:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1; 
    p1 = (const unsigned char*)s1;
    const unsigned char *p2; 
    p2 = (const unsigned char*) s2;
    size_t i; 
    i = 0;

    while (i < n) 
    {
        if (p1[i] != p2[i])
            return (p1[i] - p2[i]); 
        i++;
    }

    return (0); 
}
