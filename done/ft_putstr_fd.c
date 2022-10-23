/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:25:38 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/23 21:48:08 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	n;

	if (s != NULL)
	{
		n = ft_strlen(s);
		i = 0;
		while (i < n)
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}

int main ()
{
	ft_putstr_fd("123", 1);
}