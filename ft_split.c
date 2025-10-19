/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:15:15 by marvin            #+#    #+#             */
/*   Updated: 2025/10/19 10:15:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int count_words(char const *s, char c)
{
    int count = 0;

    // Recorremos toda la cadena
    while (*s != '\0')
    {
        // 1. BUCLER DE DESCARTE: Saltamos cualquier cantidad de delimitadores.
        while (*s != '\0' && *s == c)
            s++;

        // 2. DETECCIÓN: Si no llegamos al final, significa que encontramos el inicio
        //    de una nueva palabra (justo después del delimitador o al inicio de la cadena).
        if (*s != '\0')
            count++;

        // 3. BUCLER DE CONSUMO: Saltamos toda la palabra.
        //    Avanzamos hasta que encontramos el delimitador 'c' o el final de la cadena.
        while (*s != '\0' && *s != c)
            s++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    int     num_words;
    char    **result;

    num_words = count_words(s, c);

    // Asignación de memoria para el arreglo de punteros:
    result = (char **)malloc(/* Tu cálculo aquí */);

    // Chequeo de seguridad
    if (!result)
        return (NULL);

    // ... el resto del código
}