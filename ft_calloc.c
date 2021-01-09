#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count,size_t size) // 할당할 변수의 갯수, 할당한 변수 하나의 크기 
{
	void *p;
	
	p = malloc(count * size);
	if (p == 0)
		return 0;
	ft_bzero(p, count * size);
	return (p);
}
