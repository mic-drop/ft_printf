#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(long nb);
int	ft_puthex(unsigned long nb, char *hex);
#endif