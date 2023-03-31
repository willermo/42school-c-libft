/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:02:29 by doriani           #+#    #+#             */
/*   Updated: 2023/03/26 17:39:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_strncmp( t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;
    char        *str1;
    char        *str2;

    /* ft_strncmp test start */
	puts("");
	blue();
	puts(">> Testing ft_strncmp(const char *s1, const char *s2, size_t n) <<\n");
	// test 1
	cyan();
	puts("-- Testing with s1 = \"Hello World\", s2 = \"Hello World\", n = 10");
	reset();
	str1 = strdup("Hello World");
	str2 = strdup("Hello World");
	result = test_ft_strncmp(str1, str2, 10);
	add_result(	"ft_strncmp with s1 = \"Hello World\", s2 = \"Hello World\", n = 10",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 2
	cyan();
	puts("-- Testing with s1 = \"Hello World\", s2 = \"Hello Pippo\", n = 10");
	reset();
	str1 = strdup("Hello World");
	str2 = strdup("Hello Pippo");
	result = test_ft_strncmp(str1, str2, 10);
	add_result(	"ft_strncmp with s1 = \"Hello World\", s2 = \"Hello Pippo\", n = 10",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 3
	cyan();
	puts("-- Testing with s1 = \"Hello World\", s2 = \"Hello Pippo\", n = 6");
	reset();
	str1 = strdup("Hello World");
	str2 = strdup("Hello Pippo");
	result = test_ft_strncmp(str1, str2, 6);
	add_result(	"ft_strncmp with s1 = \"Hello World\", s2 = \"Hello Pippo\", n = 6",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 4
	cyan();
	puts("-- Testing with s1 = \"Hello Pippo\", s2 = \"Hello World\", n = 10");
	reset();
	str1 = strdup("Hello Pippo");
	str2 = strdup("Hello World");
	result = test_ft_strncmp(str1, str2, 10);
	add_result(	"ft_strncmp with s1 = \"Hello Pippo\", s2 = \"Hello World\", n = 10",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 5
	cyan();
	puts("-- Testing with s1 = \"Hello Pippo\", s2 = \"Hello World\", n = 6");
	reset();
	str1 = strdup("Hello Pippo");
	str2 = strdup("Hello World");
	result = test_ft_strncmp(str1, str2, 6);
	add_result(	"ft_strncmp with s1 = \"Hello Pippo\", s2 = \"Hello World\", n = 6",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 6
	cyan();
	puts("-- Testing with s1 = \"Hello World\", s2 = \"\", n = 0");
	reset();
	str1 = strdup("Hello World");
	str2 = strdup("");
	result = test_ft_strncmp(str1, str2, 0);
	add_result(	"ft_strncmp with s1 = \"Hello World\", s2 = \"\", n = 0",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 7
	cyan();
	puts("-- Testing with s1 = \"\", s2 = \"\", n = 10");
	reset();
	str1 = strdup("");
	str2 = strdup("");
	result = test_ft_strncmp(str1, str2, 10);
	add_result(	"ft_strncmp with s1 = \"\", s2 = \"\", n = 10",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 8
	cyan();
	puts("-- Testing with s1 = \"\", s2 = \"\", n = 0");
	reset();
	str1 = strdup("");
	str2 = strdup("");
	result = test_ft_strncmp(str1, str2, 0);
	add_result(	"ft_strncmp with s1 = \"\", s2 = \"\", n = 0",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	/* ft_strncmp test end */
}