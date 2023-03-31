/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/03/24 18:51:36 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_memchr(const void *s, int c, size_t n, size_t ma_size)
{
	void    *r_lib;
    void    *r_ft;
    size_t  i;

    i = 0;
    printf("Address content:                  ");
    while (i < ma_size)
		printf("%2hhx ", ((unsigned char *) s)[i++]);
	printf("\n");

	// r_lib contains the return value of memchr (pointer to c)
	r_lib = memchr(s, c, n);
	// r_ft contains the return value of ft_memchr (pointer to c)
	r_ft = ft_memchr(s, c, n);
	if (r_lib == NULL)
	{
		if (r_ft == NULL)
			return (pass);
		else
		{
			printf("Return value error (should be NULL)\n");
			return (fail);
		}
	}
	printf("Return address/value of memchr: %p/%c\n", r_lib, * (unsigned char *)r_lib);
	printf("Return address/value of ft_memchr: %p/%c\n", r_ft, * (unsigned char *)r_ft);
	if (r_lib != r_ft)
	{
		printf("Return value error: %p <-> %p\n", r_lib, r_ft);
		return (fail);
	}
	return (pass);
}
