/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:58:53 by doriani           #+#    #+#             */
/*   Updated: 2023/03/26 17:39:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_memmove( t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;
    char        *str1;
    char        *str2;

    /* ft_memmove test start */
	puts("");
	blue();
	puts(">> Testing ft_memmove(void *dest, const void *src, size_t n) <<\n");
	// test 1
	cyan();
	puts("-- Testing with dest = \"Hello World\", src = \"Pippo\", n = 5");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	strcpy(str1, "Hello World");
	strcpy(str2, "Pippo");
	result = test_ft_memmove(str1, str2, 5, DEFAULT_SIZE, 0);
	add_result(	"ft_memmove with dest = \"Hello World\", src = \"Pippo\", n = 5",
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
	result = test_ft_memmove(str1, str2, 0, DEFAULT_SIZE, 0);
	add_result(	"ft_memmove with dest = \"Hello World\", src = \"Pippo\", n = 0",
				result, passed, failed, invalid, manual);
	free(str1);
	free(str2);
	// test 3
	cyan();
	puts("-- Testing with dest = \"Pippo e Pluto vanno al mare\", src = dest + 4, n = 5");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = str1 + 4;
	strcpy(str1, "Pippo e pluto vanno al mare");
	result = test_ft_memmove(str1, str2, 5, DEFAULT_SIZE, 4);
	add_result(	"ft_memmove with dest = \"Pippo e Pluto vanno al mare\", src = dest + 4, n = 5",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 4
	cyan();
	puts("-- Testing with dest = \"Pippo e Pluto vanno al mare\", src = dest + 10, n = 8");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = str1 + 10;
	strcpy(str1, "Pippo e pluto vanno al mare");
	result = test_ft_memmove(str1, str2, 8, DEFAULT_SIZE, 10);
	add_result(	"ft_memmove with dest = \"Pippo e Pluto vanno al mare\", src = dest + 10, n = 8",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 5
	cyan();
	puts("-- Testing with dest = \"Pippo e Pluto vanno al mare\", src = dest, n = 18");
	reset();
	str1 = (char *) calloc(sizeof (char), DEFAULT_SIZE);
	str2 = str1;
	strcpy(str1, "Pippo e pluto vanno al mare");
	result = test_ft_memmove(str1, str2, 18, DEFAULT_SIZE, 0);
	add_result(	"ft_memmove with dest = \"Pippo e Pluto vanno al mare\", src = dest, n = 18",
				result, passed, failed, invalid, manual);
	free(str1);
	/* ft_memmove test end */
}