/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/03/25 11:58:22 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_strchr(const char *s, int c)
{
	char    *r_lib;
    char    *r_ft;

    printf("String: %s\n", s);
	printf("Char:   %c\n", c);

	// r_lib contains the return value of memchr (pointer to c)
	r_lib = strchr(s, c);
	// r_ft contains the return value of ft_memchr (pointer to c)
	r_ft = ft_strchr(s, c);
	if (r_lib == NULL)
	{
		printf("Return address of strchr: NULL\n");
		if (r_ft == NULL)
		{
			printf("Return address of ft_strchr: NULL\n");
			return (pass);
		}
		else
		{
			printf("Return address/value error (it is %p/%c, should be NULL)\n", r_ft, *r_ft);
			return (fail);
		}
	}
	printf("Return address/value of strchr: %p/%c\n", r_lib, *r_lib);
	printf("Return address/value of ft_strchr: %p/%c\n", r_ft, *r_ft);
	if (r_lib != r_ft)
	{
		printf("Return value error: %p <-> %p\n", r_lib, r_ft);
		return (fail);
	}
	return (pass);
}
