/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proves.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:44:31 by enramire          #+#    #+#             */
/*   Updated: 2022/12/31 18:08:26 by enramire         ###   ########.fr       */
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

int ft_printf (char const *str,...)
{
	int		count;
	int		i;
	int		value_arg;
	va_list	ap;

	count = 0;
	i = 0;
	count = ft_strlen(str);
	value_arg = 0;
	va_start (ap, str);
	while (i < count)
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	printf("\n");
	while (i < count)
	{
		if (str[i] == '%')
		{
			value_arg = va_arg (ap, int);
			printf("\nNext argument: %i\n", value_arg);
		}
		i++;
	}

  	//va_start (ap, count);         /* Initialize the argument list. */
	//for (i = 0; i < count; i++)
    //sum += va_arg (ap, int);    /* Get the next argument value. */
	//i++;
	//va_end (ap);                  /* Clean up. */
  return count;
}

int
main (void)
{
  /* This call prints 16. */
  printf ("\n%d\n", ft_printf ("hola que tal estas %", 1));

  /* This call prints 55. */
  //printf ("%d\n", add_em_up (10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));

  return 0;
}
