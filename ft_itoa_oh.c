#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

//PRUEBAS DE CONVERSIONES DE INT A OCT HEX ETC...

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int		i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int	ft_size(long int n, int size, int base)
{
	int	d;
	int	m;

	d = 1;
	m = 0;
	while (d != 0)
	{
		d = (n / base);
		m = (n % base);
		n = n / base;
		size++;
	}
	return (size);
}

static int	ft_fill_malloc(char *itoa, long int n, int size, int base)
{
	int		d;
	int		m;
	char	*hex_dic;

	d = 1;
	m = 0;
	hex_dic = "0123456789ABCDEF";
	while (d != 0)
	{
		d = (n / base);
		m = (n % base);
		if (base == 10 || base == 8)
			itoa[size] = m + '0';
		if (base == 16)
			itoa[size] = hex_dic[m];
		n = n / base;
		size--;
	}
	return (size);
}

static char	*ft_create_malloc(char *itoa, int neg, long int nbr, int size, int base)
{
	if (base != 10 && base != 8 && base != 16)
	{
		printf("Error en la base.");
		return (NULL);
	}
	size = ft_size(nbr, size, base);
	itoa = malloc(sizeof (char) * size + 1);
	if (!itoa)
	{
		printf("Error al creear el malloc.");
		return (NULL);
	}
	if (neg)
		itoa[0] = '-';
	ft_fill_malloc(itoa, nbr, size - 1, base);
	itoa[size] = '\0';
	return (itoa);
}

int	ft_itoa_oh(int n, int base)
{
	int			neg;
	int			size;
	char		*itoa;
	char		*string;
	int			lenght;
	int			i;
	long int	nbr;

	neg = 0;
	size = 0;
	i = 0;
	itoa = NULL;
	if (n == 0)
		return (0);
	if (n >= -2147483648 && n <= 2147483647)
	{
		nbr = (long int)n;
		if (n < 0)
		{
			neg = 1;
			nbr = nbr * -1;
			size++;
		}
		string = (ft_create_malloc(itoa, neg, nbr, size, base));
		ft_putstr_fd(string, 1);
		lenght = ft_strlen(string);
		return (lenght);
	}
	else
		return (0);
}

int main (void)
{
	int	num_dec;
	int	base;

	num_dec = 0;
	base = 10;
	printf("\nLa longitud es: %i\n", ft_itoa_oh(num_dec, base));
	return (0);
}
