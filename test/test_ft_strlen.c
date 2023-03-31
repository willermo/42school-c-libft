/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/03/24 20:33:10 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_strlen(const char *s)
{
	int		r_lib;
    int		r_ft;

	if (!s)
	{
		printf("Invalid test: String points to NULL\n");
		return (invalid);
	}
    printf("String: %s\n", s);

	// r_lib contains the return value of strlen
	r_lib = strlen(s);
	// r_ft contains the return value of ft_strlen
	r_ft = ft_strlen(s);
	printf("Return value of strlen:    %d\n", r_lib);
	printf("Return value of ft_strlen: %d\n", r_ft);
	if (r_lib != r_ft)
	{
		printf("Return value error: %d <-> %d\n", r_lib, r_ft);
		return (fail);
	}
	return (pass);
}
