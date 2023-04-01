/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:02:22 by doriani           #+#    #+#             */
/*   Updated: 2023/04/01 20:32:17 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void
tc_calloc( t_testcase **passed,
                t_testcase **failed,
                t_testcase **invalid,
                t_testcase **manual)
{
	t_result    result;
    size_t      size;
    size_t      count;

    /* ft_calloc test start */
    puts("");
	blue();
	puts(">> Testing ft_calloc(size_t count, size_t size) <<\n");
	// test 1
    count = 1;
	size = 1;
    cyan();
    puts("-- Testing with count = 1, size = 1");
    reset();
    result = test_ft_calloc(count, size);
    add_result(	"ft_calloc with count = 1, size = 1",
                result, passed, failed, invalid, manual);
    // test 2
    count = 1;
    size = 0;
    cyan();
    puts("-- Testing with count = 1, size = 0");
    reset();
    result = test_ft_calloc(count, size);
    add_result(	"ft_calloc with count = 1, size = 0",
                result, passed, failed, invalid, manual);
    // test 3
    count = 0;
    size = 1;
    cyan();
    puts("-- Testing with count = 0, size = 1");
    reset();
    result = test_ft_calloc(count, size);
    add_result(	"ft_calloc with count = 0, size = 1",
                result, passed, failed, invalid, manual);
    // test 4
    count = 0;
    size = 0;
    cyan();
    puts("-- Testing with count = 0, size = 0");
    reset();
    result = test_ft_calloc(count, size);
    add_result(	"ft_calloc with count = 0, size = 0",
                result, passed, failed, invalid, manual);
    // test 5
    count = 10;
    size = 2;
    cyan();
    puts("-- Testing with count = 10, size = 2");
    reset();
    result = test_ft_calloc(count, size);
    add_result(	"ft_calloc with count = 10, size = 2",
                result, passed, failed, invalid, manual);
    // test 6
    count = 10;
    size = 4;
    cyan();
    puts("-- Testing with count = 10, size = 4");
    reset();
    result = test_ft_calloc(count, size);
    add_result(	"ft_calloc with count = 10, size = 4",
                result, passed, failed, invalid, manual);
    // test 7
    count = 10;
    size = 8;
    cyan();
    puts("-- Testing with count = 10, size = 8");
    reset();
    result = test_ft_calloc(count, size);
    add_result(	"ft_calloc with count = 10, size = 8",
                result, passed, failed, invalid, manual);
    // // test 8
    // count = 100000000;
    // size = 1;
    // cyan();
    // puts("-- Testing with count = 100000000, size = 1");
    // reset();
    // result = test_ft_calloc(count, size);
    // add_result(	"ft_calloc with count = 100000000, size = 1",
    //             result, passed, failed, invalid, manual);
    // // test 9
    // count = 100000000;
    // size = 2;
    // cyan();
    // puts("-- Testing with count = 100000000, size = 2");
    // reset();
    // result = test_ft_calloc(count, size);
    // add_result(	"ft_calloc with count = 100000000, size = 2",
    //             result, passed, failed, invalid, manual);
    // // test 10
    // count = 100000000;
    // size = 4;
    // cyan();
    // puts("-- Testing with count = 100000000, size = 4");
    // reset();
    // result = test_ft_calloc(count, size);
    // add_result(	"ft_calloc with count = 100000000, size = 4",
    //             result, passed, failed, invalid, manual);
    // // test 11
    // count = 100000000;
    // size = 8;
    // cyan();
    // puts("-- Testing with count = 100000000, size = 8");
    // reset();
    // result = test_ft_calloc(count, size);
    // add_result(	"ft_calloc with count = 100000000, size = 8",
    //             result, passed, failed, invalid, manual);
    /* ft_calloc test end */
}
