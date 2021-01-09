/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:25:02 by dooh              #+#    #+#             */
/*   Updated: 2021/01/09 22:25:12 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	 
	if (lst == NULL || f == NULL || del == NULL)
		return ;
	if(!(new = (t_list *)malloc(sizeof(t_list))))
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		del(lst->content);
		lst = lst->next;
	}
}
