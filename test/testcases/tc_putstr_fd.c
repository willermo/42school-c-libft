/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:59:35 by doriani           #+#    #+#             */
/*   Updated: 2023/03/30 00:45:55 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	tc_putstr_fd(  t_testcase **passed,
                        t_testcase **failed,
                        t_testcase **invalid,
                        t_testcase **manual)
{
    t_result    result;
    char	    *s;
    int		    fd;

    /* ft_putstr_fd start*/
    puts("");
    blue();
    puts(">> Testing ft_putstr_fd(char *s, int fd) <<\n");
    // test 1
    s = "Hello World!";
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with s = \"Hello World!\"");
    reset();
    result = test_ft_putstr_fd(s, fd);
    add_result(	"ft_putstr_fd with s = \"Hello World!\"",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 2
    s = "Hello World! Hello World! Hello World! Hello World! Hello World!";
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with s = \"Hello World! Hello World! Hello World! Hello World! Hello World!\"");
    reset();
    result = test_ft_putstr_fd(s, fd);
    add_result(	"ft_putstr_fd with s = \"Hello World! Hello World! Hello World! Hello World! Hello World!\"",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 3
    s = "";
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with s = \"\"");
    reset();
    result = test_ft_putstr_fd(s, fd);
    add_result(	"ft_putstr_fd with s = \"\"",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 4
    s = " ";
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with s = \" \"");
    reset();
    result = test_ft_putstr_fd(s, fd);
    add_result(	"ft_putstr_fd with s = \" \"",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 5
    s = "Hello World!\nHello World!\nHello World!\nHello World!\nHello World!";
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with s = \"Hello World!\\nHello World!\\nHello World!\\nHello World!\\nHello World!\"");
    reset();
    result = test_ft_putstr_fd(s, fd);
    add_result(	"ft_putstr_fd with s = \"Hello World!\\nHello World!\\nHello World!\\nHello World!\\nHello World!\"",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    /* ft_putstr_fd end */
}