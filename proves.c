/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proves.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaneda <kaneda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:44:31 by enramire          #+#    #+#             */
/*   Updated: 2023/01/12 11:06:58 by kaneda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Tienes que implementar las siguientes conversiones:
• %c Imprime un solo carácter.
• %s Imprime una string (como se define por defecto en C).
• %p El puntero void * dado como argumento se imprime en formato hexadecimal.
• %d Imprime un número decimal (base 10).
• %i Imprime un entero en base 10.
• %u Imprime un número decimal (base 10) sin signo.
• %x Imprime un número hexadecimal (base 16) en minúsculas.
• %X Imprime un número hexadecimal (base 16) en mayúsculas.
• % % para imprimir el símbolo del porcentaje.

Proves:
- Cuando el string esta vacio y no hay variables no hace nada.
- Cuando hay solamente string sin varibles imprime el string.
- Cuando solamente hay un porcentaje genera un error: :40:10: error: incomplete format specifier [-Werror,-Wformat]


El prototipo de la funcion es:

char const *,  Significa

https://www.tutorialspoint.com/difference-between-const-char-p-char-const-p-and-const-char-const-p-in-c

const char* and char const* says that the pointer can point to a constant char and value of char pointed by this
pointer cannot be changed. But we can change the value of pointer as it is not constant and it can point to another
constant char.

const char* y char const* dice que el puntero puede apuntar a un carácter constante y el valor del carácter señalado por este
puntero no se puede cambiar. Pero podemos cambiar el valor del puntero ya que no es constante y puede apuntar a otro
carácter constante.

Segun esto podemos apuntar a diferentes direcciones de memoria de constantes ya que no podemos cambiar el valor de una constante
pero si el valor del puntero para leer el valor de otras constantes.

... Significa

Un numero variable de argumentos y de tipos. Formato:

https://manpages.ubuntu.com/manpages/trusty/es/man3/stdarg.3.html



#include <stdio.h>
#include <stdarg.h>

int addnumbers(int n, ...)
{
	printf("N value: %i\n", n);
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	va_list ptr;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
		printf("Check point: %i\n", i);
	}
	va_end(ptr);
	return sum;
}

int	main(void)
{
	printf("Variadic functions:\n");
	printf("\nSum %i + %i + %i + %i = %i\n", 1, 2, 4, 6, addnumbers(1, 2, 4, 6));
	return (0);
}

PRINTF V1.0

int ft_printf (char const *str,...)
{
	int		i;
	int		value_arg;
	char	*val_arg;
	va_list	ap;

	i = 0;
	value_arg = 0;
	val_arg = 0;
	va_start (ap, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				i++;
				ft_putchar_fd(str[i], 1);
			}
			else if (str[i + 1] == 'c')
			{
				value_arg = va_arg (ap, char);
				printf("Value arg: %i\n", value_arg);
				ft_putchar_fd(value_arg, 1);
				i++;
			}
			else if (str[i + 1] == 's')
			{
				val_arg = va_arg (&ap, int);
				ft_putstr_fd(val_arg, 1);
			}
			else
			{
					value_arg = va_arg (ap, int);
					printf("\nNext argument default: %i\n", value_arg);
			}
		}
		else
		{
			ft_putchar_fd(str[i], 1);
		}
		i++;
	}
	va_end (ap);
	return i;
}

int
main (void)
{
	char	prtc;
	int		prti;
	char	*prts;

	prtc = '5';
	prts = " hola ";
	prti = 5;
	printf ("\n%d\n", ft_printf ("0123456789%%, %%, %c, %s, %, %.", prtc, prts, prti, 0));
	return 0;
}

*/

#include <stdarg.h>
#include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>


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

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = (long int)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + '0'), fd);
}

int ft_int_to_octal(int num)
{
	int numoct[];
	int i;
	int x;

	i = 0;
	x = 0;
	numoct = [100];
	while (num != 0)
	{
		numoct[i] = num % 8;
		num /= 8;
		i++;
	}
	while (x <= i)
	{
		ft_putchar_fd(numoct[x] + '0', fd);
		x++;
	}
	return (0);
}

int ft_printf (char const *str,...)
{
	int		i;
	int		value_arg;
	char	ch;
	char	*string;
	int		num;
	va_list	ap;

	i = 0;
	value_arg = 0;
	va_start (ap, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				i++;
				ft_putchar_fd(str[i], 1);
			}
			else if (str[i + 1] == 'c')
			{
				ch = va_arg (ap, int);
				ft_putchar_fd(ch, 1);
				i++;
			}
			else if (str[i + 1] == 's')
			{
				string = va_arg (ap, char *);
				ft_putstr_fd(string, 1);
				i++;
			}
			else if (str[i + 1] == 'i')
			{
				num = va_arg (ap, int);
				ft_putnbr_fd(num, 1);
				i++;
			}
			else
			{
				value_arg = va_arg (ap, int);
				printf("\nNext argument default: %i\n", value_arg);
			}
		}
		else
		{
			ft_putchar_fd(str[i], 1);
		}
		i++;
	}
	va_end (ap);
	return i;
}

int
main (void)
{
	char	prtc;
	int		prti;
	char	*prts;

	prtc = 'X';
	prts = "hola";
	prti = 5546;
	printf ("\n%d\n", ft_printf ("0123456789%%, %%, %c, %s, %i, %.", prtc, prts, prti, 0));
	return 0;
}
