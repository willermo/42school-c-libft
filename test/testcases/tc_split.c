/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:38:18 by doriani           #+#    #+#             */
/*   Updated: 2023/03/30 01:18:36 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	tc_split(	t_testcase **passed,
                    t_testcase **failed,
                    t_testcase **invalid,
                    t_testcase **manual)
{
    
    t_result	result;
    char        *s;
    char        c;
    char        **expected;

    /* ft_split start*/
    puts("");
    blue();
    puts(">> Testing ft_split(char const *s, char c) <<\n");
    // test 1
    s = "Hello World";
    c = ' ';
    expected = (char *[]){"Hello", "World", NULL};
    cyan();
    puts("-- Testing with s = \"Hello World\", c = ' '");
    reset();
    result = test_ft_split(s, c, expected);
    add_result(	"ft_split with s = \"Hello World\", c = ' '",
                result, passed, failed, invalid, manual);
    // test 2
    s = "Hello World";
    c = 'o';
    expected = (char *[]){"Hell", " W", "rld", NULL};
    cyan();
    puts("-- Testing with s = \"Hello World\", c = 'o'");
    reset();
    result = test_ft_split(s, c, expected);
    add_result("ft_split with s = \"Hello World\", c = 'o'",
                result, passed, failed, invalid, manual);
    // test 3
    s = "Hello World";
    c = 'l';
    expected = (char *[]){"He", "o Wor", "d", NULL};
    cyan();
    puts("-- Testing with s = \"Hello World\", c = 'l'");
    reset();
    result = test_ft_split(s, c, expected);
    add_result(	"ft_split with s = \"Hello World\", c = 'l'",
                result, passed, failed, invalid, manual);
    // test 4
    s = "Hello World";
    c = 'H';
    expected = (char *[]){"ello World", NULL};
    cyan();
    puts("-- Testing with s = \"Hello World\", c = 'H'");
    reset();
    result = test_ft_split(s, c, expected);
    add_result(	"ft_split with s = \"Hello World\", c = 'H'",
                result, passed, failed, invalid, manual);
    // test 5
    s = "Hello World";
    c = 'd';
    expected = (char *[]){"Hello Worl", NULL};
    cyan();
    puts("-- Testing with s = \"Hello World\", c = 'd'");
    reset();
    result = test_ft_split(s, c, expected);
    add_result(	"ft_split with s = \"Hello World\", c = 'd'",
                result, passed, failed, invalid, manual);
    // test 6
    s = "Hello World";
    c = '!';
    expected = (char *[]){"Hello World", NULL};
    cyan();
    puts("-- Testing with s = \"Hello World\", c = '!'");
    reset();
    result = test_ft_split(s, c, expected);
    add_result(	"ft_split with s = \"Hello World\", c = '!'",
                result, passed, failed, invalid, manual);
    // test 7
    s = "Hello World";
    c = '\0';
    expected = (char *[]){"Hello World", NULL};
    cyan();
    puts("-- Testing with s = \"Hello World\", c = '\\0'");
    reset();
    result = test_ft_split(s, c, expected);
    add_result(	"ft_split with s = \"Hello World\", c = '\\0'",
                result, passed, failed, invalid, manual);
    // test 8
    s = "";
    c = ' ';
    expected = (char *[]){NULL};
    cyan();
    puts("-- Testing with s = \"\", c = ' '");
    reset();
    result = test_ft_split(s, c, expected);
    add_result(	"ft_split with s = \"\", c = ' '",
                result, passed, failed, invalid, manual);
    // test 9
    s = "    Hello     World    ";
    c = ' ';
    expected = (char *[]){"Hello", "World", NULL};
    cyan();
    puts("-- Testing with s = \"    Hello     World    \", c = ' '");
    reset();
    result = test_ft_split(s, c, expected);
    add_result(	"ft_split with s = \"    Hello     World    \", c = ' '",
                result, passed, failed, invalid, manual);
    /* ft_split end */
}
