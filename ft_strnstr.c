/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:47:38 by leaherre          #+#    #+#             */
/*   Updated: 2025/10/03 18:22:59 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * funciondkadhad
 * @param big string 
 * @param little
 * @param len
 * @return devuelve krarha
 */
#include <stdio.h>
 char *ft_strnstr(const char *big, const char *little, size_t len)
 {
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		if (little[0] == '\0')
		return (big);
	while (big[i] != '\0')
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j])
		{
			j++;
		}
		if (little [j] == '\0')
		{
			return (&big[i]);
		}
		i++;
	}
	return (0);
}
}

#include <stdio.h>
#include <string.h>

int main() {
  char myStr[] = "The rain in Spain falls mainly on the plains";
  char *myPtr = ft_strnstr(myStr, "ain");
  if (myPtr != NULL) {
    printf("%s", myPtr);
  }
  return 0;
}