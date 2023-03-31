/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/03/25 17:53:44 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_isalpha(int c)
{
	int	r_lib;
    int	r_ft;

    printf("Char: %c\n", c);

	r_lib = isalpha(c);
	r_ft = ft_isalpha(c);
	printf("Return value of isalpha:    %d\n", r_lib);
	printf("Return value of ft_isalpha: %d\n", r_ft);
	if ((r_lib != 0 && r_ft != 0) || (r_lib == 0 && r_ft == 0))
		return (pass);
	printf("Return value error: %d <-> %d\n", r_lib, r_ft);
	return (fail);
}
