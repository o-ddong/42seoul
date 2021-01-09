#include <stdio.h>
void *ft_memset(void *dest, int c, unsigned int count)
{
	unsigned int i;
	
	i = 0;
	while (i < count)
	{
		*((char *)dest + i) = c;
		printf("%p %d\n", ((char *)dest + i), i);
		i++;
	}
	return (dest);
}
#include <stdio.h>
int main()
{
	char a[10] = "asdaf";
//	printf("%s", ft_memset(a, 97, 5));
	ft_memset(a, 97, 5);
	return 0;
}
