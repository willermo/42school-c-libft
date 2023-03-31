/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/03/25 18:23:54 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_tolower(int c)
{
	int	r_lib;
    int	r_ft;

    printf("Char: %c\n", c);

	r_lib = ft_tolower(c);
	r_ft = ft_tolower(c);
	printf("Return value of tolower:    %c\n", r_lib);
	printf("Return value of ft_tolower: %c\n", r_ft);
	if (r_lib == r_ft)
		return (pass);
	printf("Return value error: %c <-> %c\n", r_lib, r_ft);
	return (fail);
}
