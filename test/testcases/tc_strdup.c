/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:59:46 by doriani           #+#    #+#             */
/*   Updated: 2023/03/26 17:39:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_strdup(  t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;
    char        *str1;

    /* ft_strdup test start */
	puts("");
	blue();
	puts(">> Testing ft_strdup(const char *s) <<\n");
	// test 1
	cyan();
	puts("-- Testing with s = \"Hello World\"");
	reset();
	str1 = strdup("Hello World");
	result = test_ft_strdup(str1);
	add_result(	"ft_strdup with s = \"Hello World\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 2
	cyan();
	puts("-- Testing with s = \"Pippo e Pluto vanno al mare\"");
	reset();
	str1 = strdup("Pippo e Pluto vanno al mare");
	result = test_ft_strdup(str1);
	add_result(	"ft_strdup with s = \"Pippo e Pluto vanno al mare\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 3
	cyan();
	puts("-- Testing with s = \"\"");
	reset();
	str1 = strdup("");
	result = test_ft_strdup(str1);
	add_result(	"ft_strdup with s = \"\"",
				result, passed, failed, invalid, manual);
	free(str1);
	/* ft_strdup test end */
}