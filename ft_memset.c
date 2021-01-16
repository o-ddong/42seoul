/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:21:13 by dooh              #+#    #+#             */
/*   Updated: 2021/01/09 22:21:26 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *dest, int c, unsigned int count)	
{
	unsigned int i;
	
	i = 0;
	while (i < count)
	{
		*((char *)dest + i) = c;
		printf("%p %d\n", ((char *)dest + i), i);
		i++;
	}
	return (dest);
}
