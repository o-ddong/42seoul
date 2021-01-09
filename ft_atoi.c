/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:10:10 by dooh              #+#    #+#             */
/*   Updated: 2021/01/09 22:31:13 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *cStr)
{
	int				sign;
	int				value;
	unsigned char	*str;

	str = (unsigned char *)cStr;
	sign = 1;
	value = 0;
	while (*str == '+' || *str == ' ' ||
			*str == '\n' || *str == '\t' ||
			*str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str)
	{
		if (*str >= 48 && *str <= 57)
		{
			value = value * 10 + *str - '0';
			str++;
		}
		else
			break ;
	}
	return (sign * value);
}
