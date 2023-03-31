/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:43:59 by doriani           #+#    #+#             */
/*   Updated: 2023/03/29 09:47:40 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_strlcpy( t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;
    char        *dst;
    char        *src;

    /* ft_strlcpy test start */
	puts("");
	blue();
	puts(">> Testing ft_strlcpy(char *dst, char *src, unsigned int dstsize) <<\n");
	// test 1
	cyan();
	puts("-- Testing with dst = \"Hello World\", src = \"Pippo\", n = 12");
	reset();
    dst = (char*) malloc(DEFAULT_SIZE);
    src = (char*) malloc(DEFAULT_SIZE);
    dst = strcpy(dst, "Hello World");
    src = strcpy(src, "Pippo");
    result = test_ft_strlcpy(dst, src, 12, DEFAULT_SIZE);
    add_result("ft_strlcpy with dst = \"Hello World\", src = \"Pippo\", n = 12", result, passed, failed, invalid, manual);
    free(dst);
    free(src);
    // test 2
    cyan();
    puts("-- Testing with dst = \"Hello World\", src = \"Pippo\", n = 0");
    reset();
    dst = (char*) malloc(DEFAULT_SIZE);
    src = (char*) malloc(DEFAULT_SIZE);
    dst = strcpy(dst, "Hello World");
    src = strcpy(src, "Pippo");
    result = test_ft_strlcpy(dst, src, 0, DEFAULT_SIZE);
    add_result("ft_strlcpy with dst = \"Hello World\", src = \"Pippo\", n = 0", result, passed, failed, invalid, manual);
    free(dst);
    free(src);
    // test 3
    cyan();
    puts("-- Testing with dst = \"Hello World\", src = \"Pippo\", n = 1");
    reset();
    dst = (char*) malloc(DEFAULT_SIZE);
    src = (char*) malloc(DEFAULT_SIZE);
    dst = strcpy(dst, "Hello World");
    src = strcpy(src, "Pippo");
    result = test_ft_strlcpy(dst, src, 1, DEFAULT_SIZE);  
    add_result("ft_strlcpy with dst = \"Hello World\", src = \"Pippo\", n = 1", result, passed, failed, invalid, manual);
    free(dst);
    free(src);
    // test 4
    cyan();
    puts("-- Testing with dst = \"Hello World\", src = \"Pippo\", n = 2");
    reset();
    dst = (char*) malloc(DEFAULT_SIZE);
    src = (char*) malloc(DEFAULT_SIZE);
    dst = strcpy(dst, "Hello World");
    src = strcpy(src, "Pippo");
    result = test_ft_strlcpy(dst, src, 2, DEFAULT_SIZE);
    add_result("ft_strlcpy with dst = \"Hello World\", src = \"Pippo\", n = 2", result, passed, failed, invalid, manual);
    free(dst);
    free(src);
    // test 5
    cyan();
    puts("-- Testing with dst = \"Hello World\", src = \"Pippo\", n = 3");
    reset();
    dst = (char*) malloc(DEFAULT_SIZE);
    src = (char*) malloc(DEFAULT_SIZE);
    dst = strcpy(dst, "Hello World");
    src = strcpy(src, "Pippo");
    result = test_ft_strlcpy(dst, src, 3, DEFAULT_SIZE);
    add_result("ft_strlcpy with dst = \"Hello World\", src = \"Pippo\", n = 3", result, passed, failed, invalid, manual);
    free(dst);
    free(src);
    /* ft_strlcpy test end */
}