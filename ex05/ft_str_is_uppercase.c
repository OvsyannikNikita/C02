/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:51:05 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/10 14:33:34 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	temp;

	temp = 1;
	i = 0;
	while (*str)
	{
		if (!(str[i] >= 65 && str[i] <= 90))
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
// 	char str[] = "SDFSFDS";
// 	result = ft_str_is_uppercase(str);
// 	printf("%d", result);
// 	return (0);
// }