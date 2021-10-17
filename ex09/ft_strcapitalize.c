/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huseo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:33:01 by huseo             #+#    #+#             */
/*   Updated: 2021/10/17 20:56:18 by huseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (j == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (j == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quaRAnte-deux; cinquante+et+un";

	printf(".%s.\n", ft_strcapitalize(str));
}
