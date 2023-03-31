/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:22:38 by doriani           #+#    #+#             */
/*   Updated: 2023/03/29 23:24:33 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	tc_strtrim(	t_testcase **passed,
                    t_testcase **failed,
                    t_testcase **invalid,
                    t_testcase **manual)
{
    
    t_result	result;
    char	    *s1;
    char	    *set;
    char        *expected;

    /* ft_strtrim start*/
    puts("");
    blue();
    puts(">> Testing ft_strtrim(char const *s1, char const *set) <<\n");
    // test 1
    s1  = "Hello";
    set = "H";
    expected = "ello";
    cyan();
    puts("-- Testing with s1 = \"Hello\", set = \"H\"");
    reset();
    result = test_ft_strtrim(s1, set, expected);
    add_result(	"ft_strtrim with s1 = \"Hello\", set = \"H\"",
                result, passed, failed, invalid, manual);
    // test 2
    s1  = "    Hello    ";
    set = " ";
    expected = "Hello";
    cyan();
    puts("-- Testing with s1 = \"    Hello    \", set = \" \"");
    reset();
    result = test_ft_strtrim(s1, set, expected);
    add_result(	"ft_strtrim with s1 = \"    Hello    \", set = \" \"",
                result, passed, failed, invalid, manual);
    // test 3
    s1  = "HelloH";
    set = "H";
    expected = "ello";
    cyan();
    puts("-- Testing with s1 = \"HelloH\", set = \"H\"");
    reset();
    result = test_ft_strtrim(s1, set, expected);
    add_result(	"ft_strtrim with s1 = \"HelloH\", set = \"H\"",
                result, passed, failed, invalid, manual);
    // test 4
    s1  = "Hello";
    set = " ";
    expected = "Hello";
    cyan();
    puts("-- Testing with s1 = \"Hello\", set = \" \"");
    reset();
    result = test_ft_strtrim(s1, set, expected);
    add_result(	"ft_strtrim with s1 = \"Hello\", set = \" \"",
                result, passed, failed, invalid, manual);
    // test 5
    s1  = "Hello";
    set = "";
    expected = "Hello";
    cyan();
    puts("-- Testing with s1 = \"Hello\", set = \"\"");
    reset();
    result = test_ft_strtrim(s1, set, expected);
    add_result(	"ft_strtrim with s1 = \"Hello\", set = \"\"",
                result, passed, failed, invalid, manual);
    // test 6
    s1  = "";
    set = " ";
    expected = "";
    cyan();
    puts("-- Testing with s1 = \"\", set = \" \"");
    reset();
    result = test_ft_strtrim(s1, set, expected);
    add_result(	"ft_strtrim with s1 = \"\", set = \" \"",
                result, passed, failed, invalid, manual);
    // test 7
    s1  = "Hello";
    set = "Hello";
    expected = "";
    cyan();
    puts("-- Testing with s1 = \"Hello\", set = \"Hello\"");
    reset();
    result = test_ft_strtrim(s1, set, expected);
    add_result(	"ft_strtrim with s1 = \"Hello\", set = \"Hello\"",
                result, passed, failed, invalid, manual);
    // test 8
    s1  = "Hello";
    set = "Heo";
    expected = "ll";
    cyan();
    puts("-- Testing with s1 = \"Hello\", set = \"Heo\"");
    reset();
    result = test_ft_strtrim(s1, set, expected);
    add_result(	"ft_strtrim with s1 = \"Hello\", set = \"Heo\"",
                result, passed, failed, invalid, manual);
    // test 9
    s1  = "Hello";
    set = "Helo";
    expected = "";
    cyan();
    puts("-- Testing with s1 = \"Hello\", set = \"Helo\"");
    reset();
    result = test_ft_strtrim(s1, set, expected);
    add_result(	"ft_strtrim with s1 = \"Hello\", set = \"Helo\"",
                result, passed, failed, invalid, manual);
    // test 10
    s1  = "Hello";
    set = "Pim";
    expected = "Hello";
    cyan();
    puts("-- Testing with s1 = \"Hello\", set = \"Pim\"");
    reset();
    result = test_ft_strtrim(s1, set, expected);
    add_result(	"ft_strtrim with s1 = \"Hello\", set = \"Pim\"",
                result, passed, failed, invalid, manual);
    /* ft_strtrim end */
}
