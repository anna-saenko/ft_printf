#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_puthex(unsigned long long x);
int	ft_puthex_upper(unsigned long long x);
int	ft_putnbr(int n);
int	ft_putunsigned(unsigned int n);
int	ft_putptr(void *ptr);

#endif
