/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:38:39 by doriani           #+#    #+#             */
/*   Updated: 2023/03/26 17:39:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_memcpy(  t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
	t_result	result;
     char	*str1;
    char	*str2;

    /* ft_memcpy test start */
	puts("");
	blue();
	puts(">> Testing ft_memcpy(void *dest, const void *src, size_t n) <<\n");
	// test 1
	cyan();
	puts("-- Testing with dest = \"Hello World\", src = \"Pippo\", n = 5");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	strcpy(str2, "Pippo");
	result = test_ft_memcpy(str1, str2, 5, DEFAULT_SIZE);
	add_result(	"ft_memcpy with dest = \"Hello World\", src = \"Pippo\", n = 5",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 2
	cyan();
	puts("-- Testing with dest = \"Hello World\", src = \"Pippo\", n = 0");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	strcpy(str2, "Pippo");
	result = test_ft_memcpy(str1, str2, 0, DEFAULT_SIZE);
	add_result(	"ft_memcpy with dest = \"Hello World\", src = \"Pippo\", n = 0",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 3
	cyan();
	puts("-- Testing with dest = \"Hi\", src = \"Pippo\", n = 5");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hi");
	strcpy(str2, "Pippo");
	result = test_ft_memcpy(str1, str2, 5, DEFAULT_SIZE);
	add_result(	"ft_memcpy with dest = \"Hi\", src = \"Pippo\", n = 5",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 4
	cyan();
	puts("-- Testing with dest = \"Hi\", src = \"Pippo\", n = 9");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hi");
	strcpy(str2, "Pippo");
	result = test_ft_memcpy(str1, str2, 9, DEFAULT_SIZE);
	add_result(	"ft_memcpy with dest = \"Hi\", src = \"Pippo\", n = 9",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 5
	cyan();
	puts("-- Testing with dest = \"Hello World\", src = \"Pippo\", n = 25");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	strcpy(str2, "Pippo");
	result = test_ft_memcpy(str1, str2, 25, DEFAULT_SIZE);
	add_result(	"ft_memcpy with dest = \"Hello World\", src = \"Pippo\", n = 25",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	/* ft_memcpy test end */
}