/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:06:11 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/10 14:28:37 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	temp;

	temp = 1;
	i = 0;
	while (*str)
	{
		if (!(str[i] >= 97 && str[i] <= 122) && !(str[i] >= 65 && str[i] <= 90))
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
// 	char str[] = "f1d";
// 	result = ft_str_is_alpha(str);
// 	printf("%d",result);
// }