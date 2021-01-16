/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:11:01 by dooh              #+#    #+#             */
/*   Updated: 2021/01/09 22:11:03 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char* str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char* ft_strmapi(char const* s, char (*f)(unsigned int, char))
{
	char* str;
	size_t i;
	size_t len;

	i = 0;
	if (s == 0)
		return (0);
	len = ft_strlen(s);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
