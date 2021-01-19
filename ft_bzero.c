/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <odh0112@naver.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:11:40 by dooh              #+#    #+#             */
/*   Updated: 2021/01/19 15:07:32 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, unsigned int n)
{
	int i;
	
	i = 0;
	while (i < n)
	{
		*((char *)s + i) = 0;
		i++;
	}
}