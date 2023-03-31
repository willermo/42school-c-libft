/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:02:03 by doriani           #+#    #+#             */
/*   Updated: 2023/03/26 17:39:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_strnstr( t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;
    char        *str1;
    char        *str2;

    /* ft_strnstr test start */
	puts("");
	blue();
	puts(">> Testing ft_strnstr(const char *big, const char *little, size_t len) <<\n");
	// test 1
	cyan();
	puts("-- Testing with big = \"Hello World\", little = \"World\", len = 5");
	reset();
	str1 = strdup("Hello World");
	str2 = strdup("World");
	result = test_ft_strnstr(str1, str2, 5);
	add_result(	"ft_strnstr with big = \"Hello World\", little = \"World\", len = 5",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 2
	cyan();
	puts("-- Testing with big = \"Hello World\", little = \"World\", len = 8");
	reset();
	str1 = strdup("Hello World");
	str2 = strdup("World");
	result = test_ft_strnstr(str1, str2, 8);
	add_result(	"ft_strnstr with big = \"Hello World\", little = \"World\", len = 8",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 3
	cyan();
	puts("-- Testing with big = \"Hello World\", little = \"World\", len = 11");
	reset();
	str1 = strdup("Hello World");
	str2 = strdup("World");
	result = test_ft_strnstr(str1, str2, 11);
	add_result(	"ft_strnstr with big = \"Hello World\", little = \"World\", len = 11",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 4
	cyan();
	puts("-- Testing with big = \"Hello World\", little = \"Hello\", len = 5");
	reset();
	str1 = strdup("Hello World");
	str2 = strdup("Hello");
	result = test_ft_strnstr(str1, str2, 5);
	add_result(	"ft_strnstr with big = \"Hello World\", little = \"Hello\", len = 5",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 5
	cyan();
	puts("-- Testing with big = \"Hello World\", little = \"Hello\", len = 3");
	reset();
	str1 = strdup("Hello World");
	str2 = strdup("Hello");
	result = test_ft_strnstr(str1, str2, 3);
	add_result(	"ft_strnstr with big = \"Hello World\", little = \"Hello\", len = 3",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 6
	cyan();
	puts("-- Testing with big = \"Hello World\", little = \"\", len = 8");
	reset();
	str1 = strdup("Hello World");
	str2 = strdup("");
	result = test_ft_strnstr(str1, str2, 8);
	add_result(	"ft_strnstr with big = \"Hello World\", little = \"\", len = 8",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 7
	cyan();
	puts("-- Testing with big = \"Hello World\", little = \"\", len = 0");
	reset();
	str1 = strdup("Hello World");
	str2 = strdup("");
	result = test_ft_strnstr(str1, str2, 0);
	add_result(	"ft_strnstr with big = \"Hello World\", little = \"\", len = 0",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	/* ft_strnstr test end */
}