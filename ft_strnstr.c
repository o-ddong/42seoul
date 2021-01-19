/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:18:10 by dooh              #+#    #+#             */
/*   Updated: 2021/01/09 22:18:23 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t big_len;
	size_t lit_len;
	size_t i;
	
	big_len = ft_strlen(big);
	lit_len = ft_strlen(little);
	i = 0;
	if (lit_len > len || big_len < lit_len)
		return (0);
	while (big[i] && i < len)
	{
		if (ft_memcmp(big, little, lit_len) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
