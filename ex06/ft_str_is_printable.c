/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huseo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:02:48 by huseo             #+#    #+#             */
/*   Updated: 2021/10/17 20:10:36 by huseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;
	char	c;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c <= 31 || c == 127)
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
	char	str[] = "abc123";
	char	str2[] = "abcde";
	printf("%d ",ft_str_is_printable(str));
	printf("%d ",ft_str_is_printable(str2));
	return (0);
}
