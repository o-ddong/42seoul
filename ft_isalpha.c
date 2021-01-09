int ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return 0;
}

#include <stdio.h>

int main()
{
	printf("%d", isalpha(97));
	return 0;
}
