/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magalean <magalean@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:40:00 by magalean          #+#    #+#             */
/*   Updated: 2024/09/11 18:46:36 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int main()
{
    char test_char;

    // Probar con una letra mayúscula
    test_char = 'A';
    printf("ft_isalpha('%c') = %d\n", test_char, ft_isalpha(test_char)); 
	// Debería retornar 1

    // Probar con una letra minúscula
    test_char = 'b';
    printf("ft_isalpha('%c') = %d\n", test_char, ft_isalpha(test_char)); 
	// Debería retornar 1

    // Probar con un dígito
    test_char = '5';
    printf("ft_isalpha('%c') = %d\n", test_char, ft_isalpha(test_char)); 
	// Debería retornar 0

    // Probar con un carácter especial
    test_char = '@';
    printf("ft_isalpha('%c') = %d\n", test_char, ft_isalpha(test_char)); 
	// Debería retornar 0

    // Probar con el carácter nulo
    test_char = '\0';
    printf("ft_isalpha('\\0') = %d\n", ft_isalpha(test_char)); 
	// Debería retornar 0

    return 0;
}*/