#include <stdlib.h>
#include "libft.h"

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *src)
{
	int		len;
	unsigned char	*p;
	int		i;

	len = ft_strlen((char *)src);
	if ((p = (unsigned char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
