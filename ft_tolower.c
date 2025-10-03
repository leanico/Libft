/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaherre <leaherre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 20:08:50 by leaherre          #+#    #+#             */
/*   Updated: 2025/10/03 17:51:33 by leaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c + 32;
	}
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main() {
//   char u = 'A';
//   char l = tolower(u);
//   printf("%c in lowercase is %c", u, l);
//   return 0;
// }