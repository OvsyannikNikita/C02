/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:35:16 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/10 14:26:56 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{	
		dest[i] = src[i];
		i++;
	}
	while (dest[i])
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

// int main()
// {
// 	int i;
// 	i = 0;
// 	char str1[] = "football";
// 	char *str2 = "soccer";
// 	ft_strncpy(str1,str2,5);
// 	// printf("%s", str1);
// 	while(str1[i])
// 	{
// 		printf("%c", str1[i]);
// 		i++;
// 	}
// 	return 0;
// }