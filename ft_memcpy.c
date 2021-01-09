void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}

#include <stdio.h>
int main()
{
	char a[10] = "asdasd";
	char b[10] = "aaaa";
	const size_t N = 4;
	printf("%d", memcpy(a, b, N));
	return 0;
}
