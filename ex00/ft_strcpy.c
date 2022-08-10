/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:23:39 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/10 14:25:22 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (0);
}

// int main ()
// {
// 	int i;
// 	char dest[10];
// 	char src[] = "Hi";
// 	ft_strcpy(dest, src);
// 	i = 0;
// 	while(dest[i])
// 	{
// 		printf("%c", dest[i]);
// 		i++;
// 	}	
// 	return 0;
// }