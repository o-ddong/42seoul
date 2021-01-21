/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 23:29:40 by dooh              #+#    #+#             */
/*   Updated: 2021/01/21 15:25:22 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_len;
	size_t	lit_len;
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	big_len = ft_strlen(big);
	lit_len = ft_strlen(little);
	if (lit_len > len || big_len < lit_len)
		return (0);
	i = big_len > len ? len : big_len;
	while (i-- >= lit_len)
	{
		if (ft_memcmp(big, little, lit_len) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
