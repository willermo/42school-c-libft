/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:28:51 by doriani           #+#    #+#             */
/*   Updated: 2023/03/30 00:44:45 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	tc_putchar_fd(  t_testcase **passed,
                        t_testcase **failed,
                        t_testcase **invalid,
                        t_testcase **manual)
{
    t_result    result;
    int		    c;
    int		    fd;

    /* ft_putchar_fd start*/
    puts("");
    blue();
    puts(">> Testing ft_putchar_fd(int c, int fd) <<\n");
    // test 1
    c = 'a';
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with c = 'a'");
    reset();
    result = test_ft_putchar_fd(c, fd);
    add_result(	"ft_putchar_fd with c = 'a'",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 2
    c = 'A';
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with c = 'A'");
    reset();
    result = test_ft_putchar_fd(c, fd);
    add_result(	"ft_putchar_fd with c = 'A'",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 3
    c = ' ';
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with c = ' '");
    reset();
    result = test_ft_putchar_fd(c, fd);
    add_result(	"ft_putchar_fd with c = ' '",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 4
    c = '\t';
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with c = '\\t'");
    reset();
    result = test_ft_putchar_fd(c, fd);
    add_result(	"ft_putchar_fd with c = '\\t'",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 5
    c = '\n';
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with c = '\\n'");
    reset();
    result = test_ft_putchar_fd(c, fd);
    add_result(	"ft_putchar_fd with c = '\\n'",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 6
    c = '\0';
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with c = '\\0'");
    reset();
    result = test_ft_putchar_fd(c, fd);
    add_result(	"ft_putchar_fd with c = '\\0'",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    /* ft_putchar_fd end */
}

    