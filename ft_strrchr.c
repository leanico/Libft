/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 20:49:10 by leaherre          #+#    #+#             */
/*   Updated: 2025/10/03 17:51:29 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (s[i] != c)
	{
		i--;
	}
	return ((char *)s + i);

}


// #include <stdio.h>
// #include <string.h>

// int main() {
//   char myStr[] = "Hello World";
//   char *myPtr2 = ft_strrchr(myStr, 'o');
//   if (myPtr2 != NULL) {
//     printf("Last: %s\n", myPtr2);
//   }
//   return 0;
// }