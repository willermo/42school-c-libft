/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:59:10 by doriani           #+#    #+#             */
/*   Updated: 2023/03/26 17:39:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_memchr(  t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;

    char    *str1;

    /* ft_memchr test start */
	puts("");
	blue();
	puts(">> Testing ft_memchr(const void *s, int c, size_t n) <<\n");
	// test 1
	cyan();
	puts("-- Testing with s = \"Hello World\", c = 'e', n = 5");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	result = test_ft_memchr(str1, 'e', 5, DEFAULT_SIZE);
	add_result(	"ft_memchr with dest = \"Hello World\", c = 'e', n = 5",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 2
	cyan();
	puts("-- Testing with s = \"Hello World\", c = 'e', n = 0");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	result = test_ft_memchr(str1, 'e', 0, DEFAULT_SIZE);
	add_result(	"ft_memchr with dest = \"Hello World\", c = 'e', n = 0",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 3
	cyan();
	puts("-- Testing with s = \"Hello World\", c = 'i', n = 9");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	result = test_ft_memchr(str1, 'i', 9, DEFAULT_SIZE);
	add_result(	"ft_memchr with dest = \"Hello World\", c = 'i', n = 9",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 4
	cyan();
	puts("-- Testing with s = \"Hello World\", c = 'l', n = 9");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	result = test_ft_memchr(str1, 'l', 9, DEFAULT_SIZE);
	add_result(	"ft_memchr with dest = \"Hello World\", c = 'l', n = 9",
				result, passed, failed, invalid, manual);
	free(str1);
	/* ft_memchr test end*/ 
}