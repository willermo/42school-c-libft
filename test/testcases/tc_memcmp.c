/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:59:24 by doriani           #+#    #+#             */
/*   Updated: 2023/04/04 13:45:56 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_memcmp(  t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;
    char        *str1;
    char        *str2;

    /* ft_memcmp test start */
	puts("");
	blue();
	puts(">> Testing ft_memcmp(const void *s1, const void *s2, size_t n) <<\n");
	// test 1
	cyan();
	puts("-- Testing with s1 = \"Hello World\", s2 = \"Hello Pippo\", n = 5");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	strcpy(str2, "Hello Pippo");
	result = test_ft_memcmp(str1, str2, 5, DEFAULT_SIZE);
	add_result(	"ft_memcmp with s1 = \"Hello World\", s2=\"Hello Pippo\", n = 5",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 2
	cyan();
	puts("-- Testing with s1 = \"Hello World\", s2 = \"Hello Pippo\", n = 9");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	strcpy(str2, "Hello Pippo");
	result = test_ft_memcmp(str1, str2, 9, DEFAULT_SIZE);
	add_result(	"ft_memcmp with s1 = \"Hello World\", s2=\"Hello Pippo\", n = 5",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 3
	cyan();
	puts("-- Testing with s1 = \"Hello World\", s2 = \"Hello World\", n = 9");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	strcpy(str2, "Hello World");
	result = test_ft_memcmp(str1, str2, 9, DEFAULT_SIZE);
	add_result(	"ft_memcmp with s1 = \"Hello World\", s2=\"Hello World\", n = 9",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 4
	cyan();
	puts("-- Testing with s1 = \"Hello World\", s2 = \"\", n = 5");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	strcpy(str2, "");
	result = test_ft_memcmp(str1, str2, 5, DEFAULT_SIZE);
	add_result(	"ft_memcmp with s1 = \"Hello World\", s2=\"\", n = 5",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 5
	cyan();
	puts("-- Testing with s1 = \"Hello World\", s2 = \"World Hello\", n = 0");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	strcpy(str2, "World Hello");
	result = test_ft_memcmp(str1, str2, 0, DEFAULT_SIZE);
	add_result(	"ft_memcmp with s1 = \"Hello World\", s2 = \"World Hello\", n = 0",
				result, passed, failed, invalid, manual);
	free(str1);
	/* ft_memcmp test end */
}
