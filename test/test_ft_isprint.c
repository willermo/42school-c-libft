/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/03/25 18:21:01 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_isprint(int c)
{
	int	r_lib;
    int	r_ft;

    printf("Char: %c\n", c);

	r_lib = isprint(c);
	r_ft = ft_isprint(c);
	printf("Return value of isprint:    %d\n", r_lib);
	printf("Return value of ft_isprint: %d\n", r_ft);
	if ((r_lib != 0 && r_ft != 0) || (r_lib == 0 && r_ft == 0))
		return (pass);
	printf("Return value error: %d <-> %d\n", r_lib, r_ft);
	return (fail);
}
