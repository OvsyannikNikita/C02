/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:09:20 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/10 14:42:10 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	check(char str, char str1)
{
	if (str1 == 0)
	{
		if (str >= 97 && str <= 122)
		{
			str -= 32;
		}
	}
	else
	{
		if (str >= 65 && str <= 90)
		{
			str += 32;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str[i] = check(str[i], str[i - 1]);
		if (!(str[i] >= 65 && str[i] <= 90)
			&&!(str [i] >= 97 && str[i] <= 122)
			&&!(str[i] >= 48 && str[i] <= 57))
		{
			while (!(str[i] >= 65 && str[i] <= 90)
				&& !(str[i] >= 97 && str[i] <= 122)
				&& !(str[i] >= 48 && str[i] <= 57))
			{
			str++;
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] -= 32;
				}
			}
		}
		str++;
	}
	return (str);
}

// int main(void)
// {
//     char s[] = "sAlUt, coMMent tU vas ? 42mots quarante----deux; cinquant";
// 	// char s[] = "hello friend how are you i Am 23yeArS oLD?";
//     ft_strcapitalize(s);
//     printf("%s\n", s);
// }