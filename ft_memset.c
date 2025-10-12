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

#include <stdio.h>
void *ft_memset(void *s, int c, size_t n)
{
	unsigned char valor;
	valor = (unsigned char)c;
	unsigned char *p;
	p = (unsigned char*)s;
	size_t i;
	i = 0;

	while (i < n)
	{
		p[i] = valor;
		i++;
	}
	return (s);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    ft_memset(str + 13, '.', 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}