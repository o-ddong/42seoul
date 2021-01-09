#include <stdlib.h>
#include <stdio.h>


size_t ft_strlen(const char* str)
{
	size_t i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char **ft_split(char const *s, char c)
{
	char **p;
	int str_len;
	
	str_len = ft_strlen(s);
	p = (char **)malloc(sizeof(str_len) + 1);
	
	int i = 0;
	int j = 0;
	
	while (i < 2)
	{
		while (j < str_len)
		{
			p[i][j] = s[j];
			if (s[j] == c)
				break;
			j++;
		}
		i++;
		j = 0;
	}
	return (p);
}


int main()
{
	char const s[10] = "abcdefgh";
	char **p = ft_split(s, 'c');
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("%c", ft_split(s, 'c'));
		}
	}
}
