#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int size;
	
	size = 0;
	while (lst != NULL)
	{
		lst = new->next;
		size++;
	}
	return (size);
}
