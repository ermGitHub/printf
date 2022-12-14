/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proves.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enramire <enramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:44:31 by enramire          #+#    #+#             */
/*   Updated: 2022/12/14 12:16:51 by enramire         ###   ########.fr       */
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



*/

#include <stdio.h>
#include <stdarg.h>

size_t	ft_strlen(const char *s)
//FUNCION DE FTLIB.H
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_printf(char const *, ...)
{
	printf("%p", *);
	return 0;
}

int	main(void)
{
	char	cr;
	char	*str;

	cr = 'a';
	str = "Hola";
	printf("lo siguiente es lo que imprime printf original:\n");;
	printf("%c\n", cr);
	printf(" %%\n");
	printf("Longitud: %zu\n", ft_strlen(str));
	ft_printf(str);
}
