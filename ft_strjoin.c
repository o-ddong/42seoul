#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int s1_len;
	int s2_len;
	int i;
	int j;
	
	if (s1 == 0 || s2 == 0)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	j = 0;
	if((str = (char *)malloc(s1_len + s2_len + 1)) == 0)
		return (0);
	while (i < s1_len)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < s2_len)
		str[i++] = s2[j++];
	str[i] = 0;
	return (str);
}
