/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 23:20:49 by dooh              #+#    #+#             */
/*   Updated: 2021/01/26 18:17:40 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_free(char **result)
{
	unsigned int i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

int			word_count(char const *s, char c)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cnt);
}

char		*make_str(char *result, char const *s, int k, int word_len)
{
	int		i;

	i = 0;
	while (word_len > 0)
	{
		result[i] = s[k - word_len];
		word_len--;
		i++;
	}
	result[i] = 0;
	return (result);
}

char		**ft_split2(char **result, char const *s, char c, int word_cnt)
{
	int		i;
	int		word_len;
	int		k;

	i = 0;
	k = 0;
	word_len = 0;
	while (s[k] && i < word_cnt)
	{
		while (s[k] && s[k] == c)
			k++;
		while (s[k] && s[k] != c)
		{
			k++;
			word_len++;
		}
		if (!(result[i] = (char *)malloc(sizeof(char) + (word_len + 1))))
			return (ft_free(result));
		make_str(result[i], s, k, word_len);
		word_len = 0;
		i++;
	}
	result[i] = 0;
	return (result);
}

char		**ft_split(char const *s, char c)
{
	int		word_cnt;
	char	**result;

	if (s == NULL)
		return (NULL);
	word_cnt = word_count(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (word_cnt + 1))))
		return (NULL);
	ft_split2(result, s, c, word_cnt);
	return (result);
}
