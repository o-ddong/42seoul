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
