#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t size;
	
	if (s == 0)
		return (0);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	size = ft_strlen((char *)s);
	if (size <= start)
	{
		str[0] = 0;
		return (str);
	}
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

