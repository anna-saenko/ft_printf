#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
int	ft_puthex(unsigned long long x)
{
	int		count;
	char	*hex;

	hex = "0123456789abcdef";
	count = 0;
	if (x >= 16)
	{
		count += ft_puthex(x / 16);
		count += ft_putchar(hex[x % 16]);
	}
	else
		count += ft_putchar(hex[x]);
	return (count);
}
int	ft_puthex_upper(unsigned long long x)
{
	int		count;
	char	*hex;

	hex = "0123456789ABCDEF";
	count = 0;
	if (x >= 16)
	{
		count += ft_puthex_upper(x / 16);
		count += ft_putchar(hex[x % 16]);
	}
	else
		count += ft_putchar(hex[x]);
	return (count);
}
int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		count += ft_putstr("(null)");
	else if (s)
	{
		while (*s)
		{
			ft_putchar(*s);
			s++;
			count++;
		}
	}
	return (count);
}
int	ft_putnbr(int n)
{
	int				count;
	unsigned int	nb;

	count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		count++;
		nb = -n;
	}
	else
		nb = n;
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		count += ft_putchar(nb % 10 + '0');
	}
	else
		count += ft_putchar(nb + '0');
	return (count);
}
int	ft_putunsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_putunsigned(n / 10);
		count += ft_putchar(n % 10 + '0');
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}
int	ft_putptr(void *ptr)
{
	int count;

	count = 0;
	ft_putstr("0x");
	count += 2;
	count += ft_puthex((unsigned long long)ptr);
	return (count);
}