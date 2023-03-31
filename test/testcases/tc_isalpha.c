/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:02:50 by doriani           #+#    #+#             */
/*   Updated: 2023/03/26 17:39:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_isalpha( t_testcase **passed,
            t_testcase **failed,
            t_testcase **invalid,
            t_testcase **manual)
{
    t_result	result;
    int         c;

    /* ft_isalpha start*/
	puts("");
	blue();
	puts(">> Testing ft_isalpha(int c) <<\n");
	// test 1
	cyan();
	c = ' ';
	puts("-- Testing with c = ' '");
	reset();
	result = test_ft_isalpha(c);
	add_result(	"ft_isalpha with c = ' '",
				result, passed, failed, invalid, manual);
	// test 2
	cyan();
	c = '\t';
	puts("-- Testing with c = '\\t'");
	reset();
	result = test_ft_isalpha(c);
	add_result(	"ft_isalpha with c = '\\t'",
				result, passed, failed, invalid, manual);
	// test 3
	cyan();
	c = 'a';
	puts("-- Testing with c = 'a'");
	reset();
	result = test_ft_isalpha(c);
	add_result(	"ft_isalpha with c = 'a'",
				result, passed, failed, invalid, manual);
	// test 4
	cyan();
	c = 'A';
	puts("-- Testing with c = 'A'");
	reset();
	result = test_ft_isalpha(c);
	add_result(	"ft_isalpha with c = 'A'",
				result, passed, failed, invalid, manual);
	// test 5
	cyan();
	c = '0';
	puts("-- Testing with c = '0'");
	reset();
	result = test_ft_isalpha(c);
	add_result(	"ft_isalpha with c = '0'",
				result, passed, failed, invalid, manual);
	// test 6
	cyan();
	c = '\0';
	puts("-- Testing with c = '\\0'");
	reset();
	result = test_ft_isalpha(c);
	add_result(	"ft_isalpha with c = '\\0'",
				result, passed, failed, invalid, manual);
	// test 7
	cyan();
	c = '\\';
	puts("-- Testing with c = '\\'");
	reset();
	result = test_ft_isalpha(c);
	add_result(	"ft_isalpha with c = '\\'",
				result, passed, failed, invalid, manual);
	// test 8
	cyan();
	c = '#';
	puts("-- Testing with c = '#'");
	reset();
	result = test_ft_isalpha(c);
	add_result(	"ft_isalpha with c = '#'",
				result, passed, failed, invalid, manual);
	/* ft_isalpha end*/
}