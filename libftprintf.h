#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(long nb);
void	ft_puthex(unsigned long nb);
#endif