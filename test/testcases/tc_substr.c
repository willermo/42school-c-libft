/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:24:36 by doriani           #+#    #+#             */
/*   Updated: 2023/03/29 17:37:22 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	tc_substr(	t_testcase **passed,
                    t_testcase **failed,
                    t_testcase **invalid,
                    t_testcase **manual)
{
    t_result	result;
    char        *expected;

    /* ft_substr start*/
    puts("");
    blue();
    puts(">> Testing ft_substr(char *s, unsigned int start, size_t len) <<\n");
    // test 1
    cyan();
    puts("-- Testing with s = \"Hello\", start = 0, len = 5");
    reset();
    expected = "Hello";
    result = test_ft_substr("Hello", 0, 5, expected);
    add_result(	"ft_substr with s = \"Hello\", start = 0, len = 5",
                result, passed, failed, invalid, manual);
    // test 2
    cyan();
    puts("-- Testing with s = \"Hello\", start = 0, len = 3");
    reset();
    expected = "Hel";
    result = test_ft_substr("Hello", 0, 3, expected);
    add_result(	"ft_substr with s = \"Hello\", start = 0, len = 3",
                result, passed, failed, invalid, manual);
    // test 3
    cyan();
    puts("-- Testing with s = \"Hello\", start = 2, len = 3");
    reset();
    expected = "llo";
    result = test_ft_substr("Hello", 2, 3, expected);
    add_result(	"ft_substr with s = \"Hello\", start = 2, len = 3",
                result, passed, failed, invalid, manual);
    // test 4
    cyan();
    puts("-- Testing with s = \"Hello\", start = 2, len = 10");
    reset();
    expected = "llo";
    result = test_ft_substr("Hello", 2, 10, expected);
    add_result(	"ft_substr with s = \"Hello\", start = 2, len = 10",
                result, passed, failed, invalid, manual);
    // test 5
    cyan();
    puts("-- Testing with s = \"Hello\", start = 10, len = 10");
    reset();
    expected = "";
    result = test_ft_substr("Hello", 10, 10, expected);
    add_result(	"ft_substr with s = \"Hello\", start = 10, len = 10",
                result, passed, failed, invalid, manual);
    // test 6
    cyan();
    puts("-- Testing with s = \"Hello\", start = 0, len = 0");
    reset();
    expected = "";
    result = test_ft_substr("Hello", 0, 0, expected);
    add_result(	"ft_substr with s = \"Hello\", start = 0, len = 0",
                result, passed, failed, invalid, manual);
    /* ft_substr end */
}