/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:10:24 by dooh              #+#    #+#             */
/*   Updated: 2021/01/09 22:10:26 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long ft_abs(int n)
{
	long long num;

	num = n;
	if (n < 0)
		return (num * -1);
	return (num);
}

int ft_len(int n)
{
	long long num;
	int len;

	len = 1;
	num = ft_abs(n);
	while (num /= 10)
		len++;
	return (len);
}

char* ft_itoa(int n)
{
	long long num;
	int len;
	char* str;
	int i;

	i = 1;
	num = ft_abs(n);
	len = ft_len(n);
	if (n < 0) // 음수일 때 부호 넣을 공간 
		len++;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))));
		return (NULL);
	if (n < 0)
		str[0] = '-';
	while (i <= len)
	{
		if (str[len - i] != '-')
			str[len - i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	str[len] = 0;
	return (str);
}

