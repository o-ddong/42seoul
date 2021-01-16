/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dooh <dooh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:18:52 by dooh              #+#    #+#             */
/*   Updated: 2021/01/09 22:18:55 by dooh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
    
void        ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *curr;
    t_list  *next;
    
    curr = *lst;
    while (curr)
    {
        next = curr->next;
        ft_lstdelone(curr, del);
        curr = next;
    }
    *lst = NULL;
}
