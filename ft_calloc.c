#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count,size_t size) // �Ҵ��� ������ ����, �Ҵ��� ���� �ϳ��� ũ�� 
{
	void *p;
	
	p = malloc(count * size);
	if (p == 0)
		return 0;
	ft_bzero(p, count * size);
	return (p);
}
