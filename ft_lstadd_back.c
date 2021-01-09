/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:11:50 by dooh              #+#    #+#             */
/*   Updated: 2021/01/09 22:11:52 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
    
void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
       
    if (lst == NULL || new_node == NULL)
		return ;
  	if (*lst == NULL)
   	{
   		*lst = new_node;
   		return ;
	}
       last = ft_lstlast(*lst);
       new->next = last->next;
       last->next = new;
}
