/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:44:22 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/10 14:31:56 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	temp;

	temp = 1;
	i = 0;
	while (*str)
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			temp = 0;
		}
		str++;
	}
	return (temp);
}

// int main()
// {
// 	int result;
// 	char str[] = "asdsad";
// 	result = ft_str_is_lowercase(str);
// 	printf("%d", result);
// 	return (0);
// }