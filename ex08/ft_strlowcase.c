/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:00:28 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/10 14:38:29 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
		str[i] = str[i] + 32;
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
// 	ft_strlowcase(str);
// 	printf("%s", str);
// 	return 0;
// }