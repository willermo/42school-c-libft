/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/03/24 20:10:46 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_memcmp(const void *s1, const void *s2, size_t n, size_t ma_size)
{
	int		r_lib;
    int		r_ft;
    size_t	i;

    i = 0;
	if (!s1 || !s2)
	{
		printf("Invalid test: One or both memory addresses point to NULL\n");
		return (invalid);
	}
    printf("s1 address content: ");
    while (i < ma_size)
		printf("%2hhx ", ((unsigned char *) s1)[i++]);
	printf("\n");
    i = 0;
    printf("s2 address content: ");
    while (i < ma_size)
		printf("%2hhx ", ((unsigned char *) s2)[i++]);
	printf("\n");

	// r_lib contains the return value of memcmp
	r_lib = memcmp(s1, s2, n);
	// r_ft contains the return value of ft_memcmp
	r_ft = ft_memcmp(s1, s2, n);
	i = 0;
	printf("Return value of memcmp:    %d\n", r_lib);
	printf("Return value of ft_memcmp: %d\n", r_ft);
	if (r_lib != r_ft)
	{
		printf("Return value error: %d <-> %d\n", r_lib, r_ft);
		return (fail);
	}
	return (pass);
}
