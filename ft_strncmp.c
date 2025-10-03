/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:04:50 by leaherre          #+#    #+#             */
/*   Updated: 2025/10/03 17:51:26 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strncmp(const char * str1, const char * str2, size_t n)
{
	int	i;
	int	res;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		if (str1[i] == '\0' || str2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//   char myStr1[] = "ABCD";
//   char myStr2[] = "ABCE";
//   int cmp = ft_strncmp(myStr1, myStr2, 4);
//   if (cmp > 0) {
//     printf("%s is greater than %s\n", myStr1, myStr2);
//   } else if (cmp < 0) {
//     printf("%s is greater than %s\n", myStr2, myStr1);
//   } else {
//     printf("%s is equal to %s\n", myStr1, myStr2);
//   }
//   return 0;
// }

