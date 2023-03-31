/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:00:40 by doriani           #+#    #+#             */
/*   Updated: 2023/03/26 17:39:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_strlcat( t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;
    char        *str1;
    char        *str2;

    /* ft_strlcat test start */
	puts("");
	blue();
	puts(">> Testing ft_strlcat(char *dest, const char *src, size_t size) <<\n");
	// test 1
	cyan();
	puts("-- Testing with dest = \"Hello World\", src = \"Pippo\", n = 5");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str1 = strcpy(str1, "Hello World");
	str2 = strdup("Pippo");
	result = test_ft_strlcat(str1, str2, 5, DEFAULT_SIZE);
	add_result(	"ft_strlcat with dest = \"Hello World\", src = \"Pippo\", n = 5",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 2
	cyan();
	puts("-- Testing with dest = \"Hello World\", src = \"Pippo\", n = 15");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str1 = strcpy(str1, "Hello World");
	str2 = strdup("Pippo");
	result = test_ft_strlcat(str1, str2, 15, DEFAULT_SIZE);
	add_result(	"ft_strlcat with dest = \"Hello World\", src = \"Pippo\", n = 15",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 3
	cyan();
	puts("-- Testing with dest = \"\", src = \"Pippo\", n = 4");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str1 = strcpy(str1, "");
	str2 = strdup("Pippo");
	result = test_ft_strlcat(str1, str2, 4, DEFAULT_SIZE);
	add_result(	"ft_strlcat with dest = \"\", src = \"Pippo\", n = 4",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 4
	cyan();
	puts("-- Testing with dest = \"\", src = \"\", n = 9");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str1 = strcpy(str1, "");
	str2 = strdup("");
	result = test_ft_strlcat(str1, str2, 9, DEFAULT_SIZE);
	add_result(	"ft_strlcat with dest = \"\", src = \"\", n = 9",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 5
	cyan();
	puts("-- Testing with dest = \"Hello World\", src = \"Pippo Pluto Paperino\", n = 0");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str1 = strcpy(str1, "Hello World");
	str2 = strdup("Pippo Pluto Paperino");
	result = test_ft_strlcat(str1, str2, 0, DEFAULT_SIZE);
	add_result(	"ft_strlcat with dest = \"Hello World\", src = \"Pippo Pluto Paperino\", n = 0",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 6
	cyan();
	puts("-- Testing with dest = \"Hello World\", src = \"Pippo Pluto Paperino\", n = 30");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str1 = strcpy(str1, "Hello World");
	str2 = strdup("Pippo Pluto Paperino");
	result = test_ft_strlcat(str1, str2, 30, DEFAULT_SIZE);
	add_result(	"ft_strlcat with dest = \"Hello World\", src = \"Pippo Pluto Paperino\", n = 30",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	/* ft_strlcat test end */
}