/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <odh0112@naver.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:01:20 by dooh              #+#    #+#             */
/*   Updated: 2021/01/19 16:01:20 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)b == (unsigned char)c)
			return ((void *)b);
		b++;
	}
	return (0);
}