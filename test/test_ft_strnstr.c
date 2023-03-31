/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/03/25 14:03:03 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_strnstr(const char *big, const char *little, size_t len)
{
	char    *r_lib;
    char    *r_ft;

    printf("Big:      %s\n", big);
	printf("Little:   %s\n", little);

	// r_lib contains the return value of strnstr (pointer to little substring)
	r_lib = strnstr(big, little, len);
	// r_ft contains the return value of ft_strnstr (pointer to little substring)
	r_ft = ft_strnstr(big, little, len);
	if (r_lib == NULL)
	{
		printf("Return address of strnstr: NULL\n");
		if (r_ft == NULL)
		{
			printf("Return address of ft_strnstr: NULL\n");
			return (pass);
		}
		else
		{
			printf("Return address/value error (it is %p/%c, should be NULL)\n", r_ft, *r_ft);
			return (fail);
		}
	}
	printf("Return address/value of strnstr: %p/%c\n", r_lib, *r_lib);
	printf("Return address/value of ft_strnstr: %p/%c\n", r_ft, *r_ft);
	if (r_lib != r_ft)
	{
		printf("Return value error: %p <-> %p\n", r_lib, r_ft);
		return (fail);
	}
	return (pass);
}
