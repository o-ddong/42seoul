void ft_putnbr_fd(int n, int fd)
{
	int nbr;
	
	if (n == -2147483648)
		write(fd, "-2147483647", 11);
	else
	{
		if(n < 0)
		{
			nbr = -n;
			ft_putchar_fd('-', 1);
		}
		else
		{
			nbr = n;
			if (nbr > 9)
				ft_putnbr_fd(nbr / 10, fd);
			ft_putchar_fd((nbr % 10 )+ '0', fd);
		}
	}
}
