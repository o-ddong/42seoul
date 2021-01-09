int ft_strncmp(const char *string1, const char *string2, size_t count)
{
	size_t i;
	unsigned char str1;
	unsigned char str2;
	
	str1 = (unsigned char *)string1;
	str2 = (unsigned char *)string2;
	i = 0;
	while (str1[i] || str2[i] || i < count)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
