/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlahteen <rlahteen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:03:13 by rlahteen          #+#    #+#             */
/*   Updated: 2024/09/12 14:31:14 by rlahteen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include "ex00/ft_strcpy.c"
// #include "ex01/ft_strncpy.c"
// #include "ex02/ft_str_is_alpha.c"
// #include "ex03/ft_str_is_numeric.c"
// #include "ex04/ft_str_is_lowercase.c"
// #include "ex05/ft_str_is_uppercase.c"
// #include "ex06/ft_str_is_printable.c"
// #include "ex07/ft_strupcase.c"
// #include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"


int	main(void)
{
	//int	return_value;
	//char *return_string;
	char *lower_return_string;
	char test_value[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	//char another_test_value[] = "xx";

	printf("Test string is = %s\n", test_value);

	// return_string = ft_strcpy(another_test_value, test_value);
	// printf("Return value of ft_strcpy = %s\n", return_string);

	//return_string = ft_strncpy(another_test_value, test_value, 3);
	//printf("Return value of ft_strncpy = %s\n", return_string);


	// return_value = ft_str_is_alpha(test_value);
	// printf("Return value of ft_str_is_alpha = %d\n", return_value);

	// return_value = ft_str_is_numeric(test_value);
	// printf("Return value of ft_str_is_numeric = %d\n", return_value);

	// return_value = ft_str_is_lowercase(test_value);
	// printf("Return value of ft_str_is_lowercase = %d\n", return_value);

	// return_value = ft_str_is_uppercase(test_value);
	// printf("Return value of ft_str_is_uppercase = %d\n", return_value);

	// return_value = ft_str_is_printable(test_value);
	// printf("Return value of ft_str_is_printable = %d\n", return_value);

	//return_string = ft_strupcase(test_value);
	//printf("Return value o ft_strupcase = %s\n", test_value);
	//printf("Return value o ft_strupcase = %s\n", return_string);

	//lower_return_string = ft_strlowcase(test_value);
	//printf("Return value o ft_lowercase = %s\n", test_value);

	lower_return_string = ft_strcapitalize(test_value);
	printf("Return value o ft_strcapitalize = %s\n", test_value);
	return (0);
}
