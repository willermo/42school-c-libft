/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:02:39 by doriani           #+#    #+#             */
/*   Updated: 2023/03/26 17:39:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_atoi(    t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;
    char        *str1;

    /* ft_atoi test start */
	puts("");
	blue();
	puts(">> Testing ft_atoi(const char *nptr) <<\n");
	// test 1
	cyan();
	puts("-- Testing with nptr = \"0\"");
	reset();
	str1 = strdup("0");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"0\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 2
	cyan();
	puts("-- Testing with nptr = \"1000\"");
	reset();
	str1 = strdup("1000");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"1000\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 3
	cyan();
	puts("-- Testing with nptr = \"-1000\"");
	reset();
	str1 = strdup("-1000");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"-1000\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 4
	cyan();
	puts("-- Testing with nptr = \"-0\"");
	reset();
	str1 = strdup("-0");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"-0\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 5
	cyan();
	puts("-- Testing with nptr = \"+0\"");
	reset();
	str1 = strdup("+0");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"+0\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 6
	cyan();
	puts("-- Testing with nptr = \"+1000\"");
	reset();
	str1 = strdup("+1000");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"+1000\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 7
	cyan();
	puts("-- Testing with nptr = \"\"");
	reset();
	str1 = strdup("");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 8
	cyan();
	puts("-- Testing with nptr = \"-\"");
	reset();
	str1 = strdup("-");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"-\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 9
	cyan();
	puts("-- Testing with nptr = \"+\"");
	reset();
	str1 = strdup("+");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"+\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 10
	cyan();
	puts("-- Testing with nptr = \"-2147483648\"");
	reset();
	str1 = strdup("-2147483648");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"-2147483648\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 11
	cyan();
	puts("-- Testing with nptr = \"2147483647\"");
	reset();
	str1 = strdup("2147483647");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"2147483647\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 12
	cyan();
	puts("-- Testing with nptr = \"-2147483649\"");
	reset();
	str1 = strdup("-2147483649");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"-2147483649\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 13
	cyan();
	puts("-- Testing with nptr = \"2147483648\"");
	reset();
	str1 = strdup("2147483648");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"2147483648\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 14
	cyan();
	puts("-- Testing with nptr = \"+2147483647\"");
	reset();
	str1 = strdup("+2147483647");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"+2147483647\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 15
	cyan();
	puts("-- Testing with nptr = \"+2147483648\"");
	reset();
	str1 = strdup("+2147483648");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"+2147483648\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 16
	cyan();
	puts("-- Testing with nptr = \"--3\"");
	reset();
	str1 = strdup("--3");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"--3\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 17
	cyan();
	puts("-- Testing with nptr = \"++3\"");
	reset();
	str1 = strdup("++3");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"++3\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 18
	cyan();
	puts("-- Testing with nptr = \"-+3\"");
	reset();
	str1 = strdup("-+3");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"-+3\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 19
	cyan();
	puts("-- Testing with nptr = \"+-3\"");
	reset();
	str1 = strdup("+-3");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"+-3\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 20
	cyan();
	puts("-- Testing with nptr = \"    -3\"");
	reset();
	str1 = strdup("    -3");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"    -3\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 21
	cyan();
	puts("-- Testing with nptr = \"    +3\"");
	reset();
	str1 = strdup("    +3");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"    +3\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 22
	cyan();
	puts("-- Testing with nptr = \"    -+3\"");
	reset();
	str1 = strdup("    -+3");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"    -+3\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 23
	cyan();
	puts("-- Testing with nptr = \"  33+3\"");
	reset();
	str1 = strdup("  33+3");
	result = test_ft_atoi(str1);
	add_result(	"ft_atoi with nptr = \"  33+3\"",
				result, passed, failed, invalid, manual);
	free(str1);
	/* ft_atoi end*/

}