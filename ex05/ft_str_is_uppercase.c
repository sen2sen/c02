/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huseo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:59:47 by huseo             #+#    #+#             */
/*   Updated: 2021/10/17 20:01:20 by huseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;
	char	c;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 'A' || c > 'Z')
		{
			j = 0;
		}
		i++;
	}
	return (j);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "abcA123";
	char	str2[] = "ABCDE";
	printf("%d ",ft_str_is_uppercase(str));
	printf("%d ",ft_str_is_uppercase(str2));
	return (0);
}
