/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:46:41 by doriani           #+#    #+#             */
/*   Updated: 2023/03/29 11:52:50 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	tc_itoa(	t_testcase **passed,
                    t_testcase **failed,
                    t_testcase **invalid,
                    t_testcase **manual)
{
    t_result    result;
    int		    n;
    char	    *expected;

    /* ft_itoa start*/
    puts("");
    blue();
    puts(">> Testing ft_itoa(int n) <<\n");
    // test 1
    n = 0;
    expected = "0";
    cyan();
    puts("-- Testing with n = 0");
    reset();
    result = test_ft_itoa(n, expected);
    add_result(	"ft_itoa with n = 0",
                result, passed, failed, invalid, manual);
    // test 2
    n = 1;
    expected = "1";
    cyan();
    puts("-- Testing with n = 1");
    reset();
    result = test_ft_itoa(n, expected);
    add_result(	"ft_itoa with n = 1",
                result, passed, failed, invalid, manual);
    // test 3
    n = -1;
    expected = "-1";
    cyan();
    puts("-- Testing with n = -1");
    reset();
    result = test_ft_itoa(n, expected);
    add_result(	"ft_itoa with n = -1",
                result, passed, failed, invalid, manual);
    // test 4
    n = 2147483647;
    expected = "2147483647";
    cyan();
    puts("-- Testing with n = 2147483647");
    reset();
    result = test_ft_itoa(n, expected);
    add_result(	"ft_itoa with n = 2147483647",
                result, passed, failed, invalid, manual);
    // test 5
    n = -2147483648;
    expected = "-2147483648";
    cyan();
    puts("-- Testing with n = -2147483648");
    reset();
    result = test_ft_itoa(n, expected);
    add_result(	"ft_itoa with n = -2147483648",
                result, passed, failed, invalid, manual);
    // test 6
    n = 42;
    expected = "42";
    cyan();
    puts("-- Testing with n = 42");
    reset();
    result = test_ft_itoa(n, expected);
    add_result(	"ft_itoa with n = 42",
                result, passed, failed, invalid, manual);
    // test 7
    n = -42;
    expected = "-42";
    cyan();
    puts("-- Testing with n = -42");
    reset();
    result = test_ft_itoa(n, expected);
    add_result(	"ft_itoa with n = -42",
                result, passed, failed, invalid, manual);
    // test 8
    n = 123456789;
    expected = "123456789";
    cyan();
    puts("-- Testing with n = 123456789");
    reset();
    result = test_ft_itoa(n, expected);
    add_result(	"ft_itoa with n = 123456789",
                result, passed, failed, invalid, manual);
    // test 9
    n = -123456789;
    expected = "-123456789";
    cyan();
    puts("-- Testing with n = -123456789");
    reset();
    result = test_ft_itoa(n, expected);
    add_result(	"ft_itoa with n = -123456789",
                result, passed, failed, invalid, manual);
    // test 10
    n = -0;
    expected = "0";
    cyan();
    puts("-- Testing with n = -0");
    reset();
    result = test_ft_itoa(n, expected);
    add_result(	"ft_itoa with n = -0",
                result, passed, failed, invalid, manual);
    /* ft_itoa end */
}
