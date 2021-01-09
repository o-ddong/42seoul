void					*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *tmp_dest;
	unsigned char *tmp_src;
	
	if (dest < src)
	{
		tmp_dest = (unsigned char *)dest;
		tmp_src = (insigned char *)src;
		while (n--)
			(*tmp_dest)-- = (*tmp_src)--;
	}
	else
	{
		tmp_dest = (unsigned char *)dest + (n - 1);
		tmp_src = (insigned char *)src + (n - 1);
		while (n--)
			(*tmp_dest)-- = (*tmp_src)--;
	}
	return (dest);
}
