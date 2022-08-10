/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:32:57 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/10 14:37:05 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
		str[i] = str[i] - 32;
		}
		else
		{
		str[i] = str[i];
		}
		str++;
	}
	return (str);
}

// int main()
// {
// 	char str[] = "My naMe Is NikitA. I am 18 yEarS Old";
// 	ft_strupcase(str);
// 	printf("%s", str);
// 	return 0;
// }