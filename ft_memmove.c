/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:19:05 by dooh              #+#    #+#             */
/*   Updated: 2021/01/09 22:19:11 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *tmp_dest;
	unsigned char *tmp_src;
	
	if (dest < src)
	{
		tmp_dest = (unsigned char *)dest;
		tmp_src = (unsigned char *)src;
		while (n--)
			*tmp_dest-- = *tmp_src--;
	}
	else
	{
		tmp_dest = (unsigned char *)dest + (n - 1);
		tmp_src = (unsigned char *)src + (n - 1);
		while (n--)
			*tmp_dest-- = *tmp_src--;
	}
	return (dest);
}
