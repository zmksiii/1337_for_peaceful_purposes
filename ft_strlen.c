/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:04:49 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/16 14:31:38 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t  ft_strlen(const char *s){
    size_t i;
    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}

int main(){
    char a[10] = "18547";
    char *b = NULL;
    // printf("%lu\n",strlen(b));
    printf("%lu",ft_strlen(b));
    
    return 0;
}