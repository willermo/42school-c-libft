/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:55:08 by doriani           #+#    #+#             */
/*   Updated: 2023/03/29 23:53:02 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

static char func(unsigned int i, char c)
{
    if (i % 2)
        return (tolower(c));
    return (toupper(c));
}

void	tc_strmapi(	t_testcase **passed,
                    t_testcase **failed,
                    t_testcase **invalid,
                    t_testcase **manual)
{
    t_result    result;
    char	    *s;
    char	    *expected;

    /* ft_strmapi start*/
    puts("");
    blue();
    puts(">> Testing ft_strmapi(char const *s, char (*f)(unsigned int, char)) <<\n");
    // test 1
    s = "abc";
    expected = "AbC";
    cyan();
    puts("-- Testing with s = \"abc\"");
    reset();
    result = test_ft_strmapi(s, expected, func);
    add_result(	"ft_strmapi with s = \"abc\"",
                result, passed, failed, invalid, manual);
    // test 2
    s = "123";
    expected = "123";
    cyan();
    puts("-- Testing with s = \"123\"");
    reset();
    result = test_ft_strmapi(s, expected, func);
    add_result(	"ft_strmapi with s = \"123\"",
                result, passed, failed, invalid, manual);
    // test 3
    s = "abc123";
    expected = "AbC123";
    cyan();
    puts("-- Testing with s = \"abc123\"");
    reset();
    result = test_ft_strmapi(s, expected, func);
    add_result(	"ft_strmapi with s = \"abc123\"",
                result, passed, failed, invalid, manual);
    // test 4
    s = "abc123abc123";
    expected = "AbC123AbC123";
    cyan();
    puts("-- Testing with s = \"abc123abc123\"");
    reset();
    result = test_ft_strmapi(s, expected, func);
    add_result(	"ft_strmapi with s = \"abc123abc123\"",
                result, passed, failed, invalid, manual);
    // test 5
    s = "";
    expected = "";
    cyan();
    puts("-- Testing with s = \"\"");
    reset();
    result = test_ft_strmapi(s, expected, func);
    add_result(	"ft_strmapi with s = \"\"",
                result, passed, failed, invalid, manual);
    // test 6
    s = " ";
    expected = " ";
    cyan();
    puts("-- Testing with s = \" \"");
    reset();
    result = test_ft_strmapi(s, expected, func);
    add_result(	"ft_strmapi with s = \" \"",
                result, passed, failed, invalid, manual);
    // test 7
    s = " ";
    expected = " ";
    cyan();
    puts("-- Testing with s = \" \"");
    reset();
    result = test_ft_strmapi(s, expected, NULL);    
    add_result(	"ft_strmapi with s = \" \"",
                result, passed, failed, invalid, manual);
    // test 8
    s = NULL;
    expected = NULL;
    cyan();
    puts("-- Testing with s = NULL");
    reset();
    result = test_ft_strmapi(s, expected, func);
    add_result(	"ft_strmapi with s = NULL",
                result, passed, failed, invalid, manual);
    /* ft_strmapi end */
}