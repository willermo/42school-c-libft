/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:08:48 by doriani           #+#    #+#             */
/*   Updated: 2023/03/29 23:53:36 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

static void func(unsigned int i, char *c)
{
    if (i % 2)
        *c = tolower(*c);
    else
        *c = toupper(*c);
}

void	tc_striteri(t_testcase **passed,
                    t_testcase **failed,
                    t_testcase **invalid,
                    t_testcase **manual)
{
    t_result    result;
    char	    *s;
    char	    *expected;

    /* ft_striteri start*/
    puts("");
    blue();
    puts(">> Testing ft_striteri(char *s, void (*f)(unsigned int, char *)) <<\n");
    // test 1
    s = strdup("abc");
    expected = "AbC";
    cyan();
    puts("-- Testing with s = \"abc\"");
    reset();
    result = test_ft_striteri(s, expected, func);
    add_result(	"ft_striteri with s = \"abc\"",
                result, passed, failed, invalid, manual);
    free(s);
    // test 2
    s = strdup("123");
    expected = "123";
    cyan();
    puts("-- Testing with s = \"123\"");
    reset();
    result = test_ft_striteri(s, expected, func);
    add_result(	"ft_striteri with s = \"123\"",
                result, passed, failed, invalid, manual);
    free(s);
    // test 3
    s = strdup("abc123");
    expected = "AbC123";
    cyan();
    puts("-- Testing with s = \"abc123\"");
    reset();
    result = test_ft_striteri(s, expected, func);
    add_result(	"ft_striteri with s = \"abc123\"",
                result, passed, failed, invalid, manual);
    free(s);
    // test 4
    s = strdup("Hello World!");
    expected = "HeLlO WoRlD!";
    cyan();
    puts("-- Testing with s = \"Hello World!\"");
    reset();
    result = test_ft_striteri(s, expected, func);
    add_result(	"ft_striteri with s = \"Hello World!\"",
                result, passed, failed, invalid, manual);
    free(s);
    // test 5
    s = strdup("");
    expected = "";
    cyan();
    puts("-- Testing with s = \"\"");
    reset();
    result = test_ft_striteri(s, expected, func);
    add_result(	"ft_striteri with s = \"\"",
                result, passed, failed, invalid, manual);
    free(s);
    /* ft_striteri end */
}