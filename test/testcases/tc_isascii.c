/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:03:17 by doriani           #+#    #+#             */
/*   Updated: 2023/03/26 17:39:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_isascii( t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;
    int         c;

    /* ft_isascii start*/
	puts("");
	blue();
	puts(">> Testing ft_isascii(int c) <<\n");
	// test 1
	cyan();
	c = -2;
	puts("-- Testing with c = -2");
	reset();
	result = test_ft_isascii(c);
	add_result(	"ft_isascii with c = -2",
				result, passed, failed, invalid, manual);
	// test 2
	cyan();
	c = 0;
	puts("-- Testing with c = 0");
	reset();
	result = test_ft_isascii(c);
	add_result(	"ft_isascii with c = 0",
				result, passed, failed, invalid, manual);
	// test 3
	cyan();
	c = 32;
	puts("-- Testing with c = 32");
	reset();
	result = test_ft_isascii(c);
	add_result(	"ft_isascii with c = 32",
				result, passed, failed, invalid, manual);
	// test 4
	cyan();
	c = 127;
	puts("-- Testing with c = 127");
	reset();
	result = test_ft_isascii(c);
	add_result(	"ft_isascii with c = 127",
				result, passed, failed, invalid, manual);
	// test 5
	cyan();
	c = 128;
	puts("-- Testing with c = 128");
	reset();
	result = test_ft_isascii(c);
	add_result(	"ft_isascii with c = 128",
				result, passed, failed, invalid, manual);
	// test 6
	cyan();
	c = 256;
	puts("-- Testing with c = 256");
	reset();
	result = test_ft_isascii(c);
	add_result(	"ft_isascii with c = 256",
				result, passed, failed, invalid, manual);
	// test 7
	cyan();
	c = 256;
	puts("-- Testing with c = 256");
	reset();
	result = test_ft_isascii(c);
	add_result(	"ft_isascii with c = 256",
				result, passed, failed, invalid, manual);
	// test 8
	cyan();
	c = 257;
	puts("-- Testing with c = 257");
	reset();
	result = test_ft_isascii(c);
	add_result(	"ft_isascii with c = 257",
				result, passed, failed, invalid, manual);
	/* ft_isascii end*/
}