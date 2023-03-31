/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:00:49 by doriani           #+#    #+#             */
/*   Updated: 2023/03/26 17:39:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_strchr(  t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;
    char        *str1;

    /* ft_strchr test start */
	puts("");
	blue();
	puts(">> Testing ft_strchr(const char *s, int c) <<\n");
	// test 1
	cyan();
	puts("-- Testing with s = \"Hello World\", c = 'e'");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	result = test_ft_strchr(str1, 'e');
	add_result(	"ft_strchr with s = \"Hello World\", c = 'e'",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 2
	cyan();
	puts("-- Testing with s = \"Hello World\", c = 'd'");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	result = test_ft_strchr(str1, 'd');
	add_result(	"ft_strchr with s = \"Hello World\", c = 'd'",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 3
	cyan();
	puts("-- Testing with s = \"Hello World\", c = 'f'");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	result = test_ft_strchr(str1, 'f');
	add_result(	"ft_strchr with s = \"Hello World\", c = 'f'",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 4
	cyan();
	puts("-- Testing with s = \"Hello World\", c = '\\0'");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	result = test_ft_strchr(str1, '\0');
	add_result(	"ft_strchr with s = \"Hello World\", c = '\\0'",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 5
	cyan();
	puts("-- Testing with s = \"\", c = 'e'");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "");
	result = test_ft_strchr(str1, 'e');
	add_result(	"ft_strchr with s = \"\", c = 'e'",
				result, passed, failed, invalid, manual);
	free(str1);
	/* ft_strchr test end */
}