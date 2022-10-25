/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:53:56 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/24 18:00:56 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = NULL;
	if (size > 0)
	{
		p = (void *)malloc(count * sizeof(size));
		ft_bzero(p, size);
	}
	return (p);
}
