/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:59:34 by doriani           #+#    #+#             */
/*   Updated: 2023/04/04 16:26:34 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_strlen(  t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;
    char        *str1;

    /* ft_strlen test start */
	puts("");
	blue();
	puts(">> Testing ft_strlen(const char *s) <<\n");
	// test 1
	cyan();
	puts("-- Testing with s = \"Hello World\"");
	reset();
	str1 = strdup("Hello World");
	result = test_ft_strlen(str1);
	add_result(	"ft_strlen with s = \"Hello World\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 2
	cyan();
	puts("-- Testing with s = \"Pippo e Pluto vanno al mare\"");
	reset();
	str1 = strdup("Pippo e Pluto vanno al mare");
	result = test_ft_strlen(str1);
	add_result(	"ft_strlen with s = \"Pippo e Pluto vanno al mare\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 3
	cyan();
	puts("-- Testing with s = \"\"");
	reset();
	str1 = strdup("");
	result = test_ft_strlen(str1);
	add_result(	"ft_strlen with s = \"\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 3
	cyan();
	puts("-- Testing with s = NULL");
	reset();
	result = test_ft_strlen(NULL);
	add_result(	"ft_strlen with s = NULL",
				result, passed, failed, invalid, manual);
	/* ft_strlen test end */
}