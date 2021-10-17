/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huseo <huseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:33:08 by huseo             #+#    #+#             */
/*   Updated: 2021/10/17 17:32:22 by huseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;
	char	c;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if(c < '0' || c > '9')
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
	char	str2[] = "12345";
	printf("%d",ft_str_is_numeric(str));
	printf("%d",ft_str_is_numeric(str2));
	return (0);
}
