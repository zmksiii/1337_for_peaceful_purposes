/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:01:51 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/24 15:53:16 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*res;
	char	*s;

	s = (char *)s1;
	len = ft_strlen(s);
	printf("%d", len);
	i = 0;
	res = (char *) malloc(len + 1);
	if (s1)
		ft_strlcpy(res, s, len);
	else
		return (NULL);
	return (res);
}
