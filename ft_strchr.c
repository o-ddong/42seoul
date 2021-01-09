/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:17:57 by dooh              #+#    #+#             */
/*   Updated: 2021/01/09 22:18:00 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char* ft_strchr(const char *str, int c)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)str + i); 
		i++;
	}
	return (NULL);
}