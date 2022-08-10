/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:57:36 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/10 14:30:21 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	temp;

	temp = 1;
	i = 0;
	while (*str)
	{
		if (!(str[i] >= 48 && str[i] <= 57))
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
// 	char str[] = "23749182491238121980987654321";
// 	result = ft_str_is_numeric(str);
// 	printf("%d", result);
// 	return (0);
// }