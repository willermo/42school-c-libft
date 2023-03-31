/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:55:42 by doriani           #+#    #+#             */
/*   Updated: 2023/03/30 00:46:19 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	tc_putendl_fd(  t_testcase **passed,
                        t_testcase **failed,
                        t_testcase **invalid,
                        t_testcase **manual)
{
    t_result    result;
    char	    *s;
    int		    fd;

    /* ft_putendl_fd start*/
    puts("");
    blue();
    puts(">> Testing ft_putendl_fd(char *s, int fd) <<\n");
    // test 1
    s = "Hello World!";
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with s = \"Hello World!\"");
    reset();
    result = test_ft_putendl_fd(s, fd);
    add_result(	"ft_putendl_fd with s = \"Hello World!\"",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 2
    s = "Hello World! Hello World! Hello World! Hello World! Hello World!";
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with s = \"Hello World! Hello World! Hello World! Hello World! Hello World!\"");
    reset();
    result = test_ft_putendl_fd(s, fd);
    add_result(	"ft_putendl_fd with s = \"Hello World! Hello World! Hello World! Hello World! Hello World!\"",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 3
    s = "";
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with s = \"\"");
    reset();
    result = test_ft_putendl_fd(s, fd);
    add_result(	"ft_putendl_fd with s = \"\"",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 4
    s = " ";
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with s = \" \"");
    reset();
    result = test_ft_putendl_fd(s, fd);
    add_result(	"ft_putendl_fd with s = \" \"",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 5
    s = "Hello World!\n";
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with s = \"Hello World!\n\"");
    reset();
    result = test_ft_putendl_fd(s, fd);
    add_result(	"ft_putendl_fd with s = \"Hello World!\n\"",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 6
    s = "Hello World!\nHello World!\nHello World!\nHello World!\nHello World!\n";
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with s = \"Hello World!\nHello World!\nHello World!\nHello World!\nHello World!\n\"");
    reset();
    result = test_ft_putendl_fd(s, fd);
    add_result(	"ft_putendl_fd with s = \"Hello World!\nHello World!\nHello World!\nHello World!\nHello World!\n\"",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    /* ft_putendl_fd end */
}