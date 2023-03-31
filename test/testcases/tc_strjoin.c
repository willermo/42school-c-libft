/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:21:21 by doriani           #+#    #+#             */
/*   Updated: 2023/03/29 17:37:53 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	tc_strjoin(	t_testcase **passed,
                    t_testcase **failed,
                    t_testcase **invalid,
                    t_testcase **manual)
{
    t_result	result;

    /* ft_strjoin start*/
    puts("");
    blue();
    puts(">> Testing ft_strjoin(char const *s1, char const *s2) <<\n");
    // test 1
    cyan();
    puts("-- Testing with s1 = \"Hello\", s2 = \" World\"");
    reset();
    result = test_ft_strjoin("Hello", " World");
    add_result(	"ft_strjoin with s1 = \"Hello\", s2 = \" World\"",
                result, passed, failed, invalid, manual);
    // test 2
    cyan();
    puts("-- Testing with s1 = \"Hello\", s2 = \"\"");
    reset();
    result = test_ft_strjoin("Hello", "");
    add_result(	"ft_strjoin with s1 = \"Hello\", s2 = \"\"",
                result, passed, failed, invalid, manual);
    // test 3
    cyan();
    puts("-- Testing with s1 = \"\", s2 = \" World\"");
    reset();
    result = test_ft_strjoin("", " World");
    add_result(	"ft_strjoin with s1 = \"\", s2 = \" World\"",
                result, passed, failed, invalid, manual);
    // test 4
    cyan();
    puts("-- Testing with s1 = \"\", s2 = \"\"");
    reset();
    result = test_ft_strjoin("", "");
    add_result(	"ft_strjoin with s1 = \"\", s2 = \"\"",
                result, passed, failed, invalid, manual);
    // test 5
    cyan();
    puts("-- Testing with s1 = \"Hello\", s2 = NULL");
    reset();
    result = test_ft_strjoin("Hello", NULL);
    add_result(	"ft_strjoin with s1 = \"Hello\", s2 = NULL",
                result, passed, failed, invalid, manual);
    // test 6
    cyan();
    puts("-- Testing with s1 = NULL, s2 = \" World\"");
    reset();
    result = test_ft_strjoin(NULL, " World");
    add_result(	"ft_strjoin with s1 = NULL, s2 = \" World\"",
                result, passed, failed, invalid, manual);
    /* ft_strjoin end */
}