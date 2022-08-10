/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:57:57 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/08 18:10:08 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	temp;

	temp = 1;
	i = 0;
	while (*str)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
// 	char str[] = "asadASDASDSAd131254363    Õ5464574!!!___!_!_:AD>ASD>SAD5";
// 	result = ft_str_is_printable(str);
// 	printf("%d", result);
// 	return (0);
// }