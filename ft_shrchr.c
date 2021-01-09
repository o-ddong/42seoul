/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shrchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:13:19 by dooh              #+#    #+#             */
/*   Updated: 2021/01/09 22:13:20 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_shrchr(const char *s, int c)
{
	int i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (0);
}