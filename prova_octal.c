#include <stdarg.h>
#include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

//PRUEBAS DE CONVERSIONES DE INT A OCT HEX ETC...

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int ft_int_to_octal(int num)
{
	int num_oct[100];
	int i;
	int fd;

	i = 0;
	fd = 1;
	while (num != 0)
	{
		num_oct[i] = num % 8;
		num /= 8;
		i++;
	}
	printf(" es el numero en base octal:");
	while (i >= 0)
	{
		ft_putchar_fd(num_oct[i] + '0', fd);
		i--;
	}
	printf("\n");
	return (0);
}

int ft_int_to_hex(int num)
{
	char	*num_hex[];
	int		count;
	int		temp;
	int		fd;

	count = 0;
	temp = num;
	fd = 1;
	num_hex = "0123456789ABCDEF";
	if (num == 0)
	{
		ft_putchar_fd('0', fd);
		return;
	}
	while (temp != 0)
	{
		count++;
		numhex[i] = num % 16;
		num /= 16;
		i++;
	}
	printf(" es el numero en base hex:");
	while (i >= 0)
	{
		ft_putchar_fd(numhex[i] + '0', fd);
		i--;
	}
	printf("\n");
	return (0);
}

int main (void)
{
    int num_int;

    num_int = 15;
    printf("Numero entero: %i", num_int);
	printf("\n-------------------\n");
    ft_int_to_octal(num_int);
	ft_int_to_hex(num_int);
	return (0);
}