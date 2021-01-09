//#include <stdio.h>
//
//size_t ft_strlen(const char* str)
//{
//	size_t i;
//	
//	i = 0;
//	while (str[i])
//		i++;
//	return (i);
//}
#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}
//
//int main()
//{
//	const char a[10] = "abcde";
//	printf("%d %d", ft_strrchr(a, 97), ft_strrchr(a, 99));
//	return 0;
//}

