/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:25:49 by dooh              #+#    #+#             */
/*   Updated: 2021/01/09 22:25:50 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(const char* str)
{
	size_t i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}