/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:05:21 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/27 13:17:01 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		if (lst->next == NULL)
			return (lst);
		while (lst->next)
			lst = lst->next;
	return (lst);
	}
	return (NULL);
}
