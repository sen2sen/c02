/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohuisu <seohuisu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 00:34:04 by seohuisu          #+#    #+#             */
/*   Updated: 2021/10/18 01:57:34 by seohuisu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_hexa(int c)
{
	char	*base;

	base = "0123456789abcdef";
	if (c < 0)
		c += 256;
	if (c < 16)
		write(1, &base[c], 1);
	else
	{
		write(1, &base[c / 16], 1);
		write(1, &base[c % 16], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\0", 2);
			ft_put_hexa(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(void)
{
    ft_putstr_non_printable("abc\nade");
}