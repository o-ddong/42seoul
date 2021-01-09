//int ft_memcmp(const void* ptr1, const void* ptr2, size_t num)
//{
//	int i;
//	
//	i = 0;
//	while ((((char *)ptr1)[i] || ((char *)ptr2)[i]) && i < num)
//	{
//		if ((((char *)ptr1)[i] > ((char *)ptr2)[i]))
//			return ((((char *)ptr1)[i] - ((char *)ptr2)[i]));
//		else if ((((char *)ptr1)[i] < ((char *)ptr2)[i]))
//			return ((((char *)ptr1)[i] - ((char *)ptr2)[i]));
//		i++;
//	}
//	return (0);
//}

int ft_memcmp(const void* ptr1, const void* ptr2, size_t num)
{
	unsigned char *s1;
	unsigned char *s2;
	int i;
	
	s1 = (unsigned char *)b1;
	s2 = (unsigned char *)b2;
	i = 0;
	while (s1[i] || s2[i] && i < num)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
