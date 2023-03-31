/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/03/25 15:51:56 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	r_lib;
    int	r_ft;

    printf("String 1: %s\n", s1);
	printf("String 2: %s\n", s2);

	// r_lib contains the return value of strncmp
	r_lib = strncmp(s1, s2, n);
	// r_ft contains the return value of ft_strncmp
	r_ft = ft_strncmp(s1, s2, n);
	printf("Return value of strncmp: %d\n", r_lib);
	printf("Return value of ft_strstr: %d\n", r_ft);
	if ((r_lib < 0 &&  r_ft >= 0) || (r_lib > 0 &&  r_ft <= 0))
	{
		printf("Return value error: %d <-> %d\n", r_lib, r_ft);
		return (fail);
	}
	return (pass);
}
