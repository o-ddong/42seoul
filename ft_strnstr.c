#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int big_len;
	int lit_len;
	int i;
	
	big_len = ft_strlen(big);
	lit_len = ft_strlen(little);
	i = 0;
	if (lit_len > len || big_len < lit_len)
		return (0);
	while (big[i] && i < len)
	{
		if (ft_memcmp(big, little, lit_len) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}

