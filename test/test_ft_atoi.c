/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/03/25 16:02:03 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_atoi(const char *nptr)
{
	int	r_lib;
    int	r_ft;

    printf("String: %s\n", nptr);

	// r_lib contains the return value of atoi
	r_lib = atoi(nptr);
	// r_ft contains the return value of ft_atoi
	r_ft = ft_atoi(nptr);
	printf("Return value of atoi: %d\n", r_lib);
	printf("Return value of ft_atoi: %d\n", r_ft);
	if (r_lib != r_ft)
	{
		printf("Return value error: %d <-> %d\n", r_lib, r_ft);
		return (fail);
	}
	return (pass);
}
