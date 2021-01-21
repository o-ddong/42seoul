/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 22:53:27 by dooh              #+#    #+#             */
/*   Updated: 2021/01/21 14:28:00 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	while (lst != NULL)
	{
		f(lst->content);
		del(lst->content);
		lst = lst->next;
	}
}
