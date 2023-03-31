/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/03/27 20:47:18 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_strdup(const char *s)
{
	char	*r_lib;
    char	*r_ft;

	if (!s)
	{
		printf("Invalid test: String points to NULL\n");
		return (invalid);
	}
    printf("String: %s\n", s);

	// r_lib contains the return value of strlen
	r_lib = strdup(s);
	// r_ft contains the return value of ft_strlen
	r_ft = ft_strdup(s);
	printf("String duplicated by strdup:    %s\n", r_lib);
	printf("String duplicated by ft_strdup: %s\n", r_ft);
	if (strcmp(r_lib, r_ft) != 0)
	{
		printf("Return value error: %s <-> %s\n", r_lib, r_ft);
		free(r_lib);
		free(r_ft);
		return (fail);
	}
	free(r_lib);
	free(r_ft);
	return (pass);
}