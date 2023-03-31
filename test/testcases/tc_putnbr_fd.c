/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:00:28 by doriani           #+#    #+#             */
/*   Updated: 2023/03/30 02:04:58 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	tc_putnbr_fd(  t_testcase **passed,
                        t_testcase **failed,
                        t_testcase **invalid,
                        t_testcase **manual)
{
    t_result    result;
    int		    n;
    int		    fd;

    /* ft_putnbr_fd start*/
    puts("");
    blue();
    puts(">> Testing ft_putnbr_fd(int n, int fd) <<\n");
    // test 1
    n = 42;
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with n = 42");
    reset();
    result = test_ft_putnbr_fd(n, fd, "42");
    add_result(	"ft_putnbr_fd with n = 42",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 2
    n = -42;
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with n = -42");
    reset();
    result = test_ft_putnbr_fd(n, fd, "-42");
    add_result(	"ft_putnbr_fd with n = -42",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 3
    n = 0;
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with n = 0");
    reset();
    result = test_ft_putnbr_fd(n, fd, "0");
    add_result(	"ft_putnbr_fd with n = 0",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 4
    n = 2147483647;
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with n = 2147483647");
    reset();
    result = test_ft_putnbr_fd(n, fd, "2147483647");
    add_result(	"ft_putnbr_fd with n = 2147483647",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    // test 5
    n = INT_MIN;
    fd = open("fd.txt", O_RDWR | O_CREAT);
    cyan();
    puts("-- Testing with n = -2147483648");
    reset();
    result = test_ft_putnbr_fd(n, fd, "-2147483648");
    add_result(	"ft_putnbr_fd with n = -2147483648",
                result, passed, failed, invalid, manual);
    close(fd);
    remove("fd.txt");
    /* ft_putnbr_fd end */
}
