/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 20:25:09 by leaherre          #+#    #+#             */
/*   Updated: 2025/10/03 17:51:20 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		i++;
	}
	return ((char *)s + i);

}
// #include <stdio.h>
// #include <string.h>

// int main() {
//   char myStr[] = "Hello World";
//   char *myPtr = ft_strchr(myStr, 'W');
//   if (myPtr != NULL) 
//   {
//     printf("%s", myPtr);
//   }
//   return 0;
// }