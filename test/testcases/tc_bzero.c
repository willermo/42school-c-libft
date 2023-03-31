/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:37:02 by doriani           #+#    #+#             */
/*   Updated: 2023/03/26 17:39:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_bzero(  t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
	t_result	result;
    char	*str1;

    /* ft_bzero test start */
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	puts("");
	blue();
	puts(">> Testing ft_bzero(void *s, size_t n) <<\n");
	cyan();
	puts("-- Testing with s = \"Hello World\", n = 5");
	reset();
	strcpy(str1, "Hello World");
	result = test_ft_bzero(str1, 5, DEFAULT_SIZE);
	add_result(	"ft_bzero with s = \"Hello World\", n = 5",
				result, passed, failed, invalid, manual);
	puts("");
	cyan();
	puts("-- Testing with s = \"Hello World\", n = 0");
	reset();
	strcpy(str1, "Hello World");
	result = test_ft_bzero(str1, 0, DEFAULT_SIZE);
	add_result(	"ft_bzero with s = \"Hello World\", n = 0",
				result, passed, failed, invalid, manual);
	puts("");
	cyan();
	puts("-- Testing with s = \"Hello World\", n = 11");
	reset();
	strcpy(str1, "Hello World");
	result = test_ft_bzero(str1, 11, DEFAULT_SIZE);
	add_result(	"ft_bzero with s = \"Hello World\", n = 11",
				result, passed, failed, invalid, manual);
	puts("");
	cyan();
	puts("-- Testing with s = \"Hello World\", n = 12");
	reset();
	strcpy(str1, "Hello World");
	result = test_ft_bzero(str1, 12, DEFAULT_SIZE);
	add_result(	"ft_bzero with s = \"Hello World\", n = 12",
				result, passed, failed, invalid, manual);
	reset();
	free(str1);
	/* ft_bzero test end */
}