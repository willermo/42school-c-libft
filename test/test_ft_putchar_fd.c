/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:10:40 by doriani           #+#    #+#             */
/*   Updated: 2023/03/30 01:21:49 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_putchar_fd(char c, int fd)
{
    char buffer[1];
    
    printf("Character:                     %c\n", c);
    printf("File descriptor:               %d\n", fd);
    ft_putchar_fd(c, fd);
    lseek(fd, 0, SEEK_SET);
    read(fd, buffer, 1);
    printf("Char written by ft_putchar_fd: %c\n", buffer[0]);
    if (c == buffer[0])
        return (pass);
    printf("Return value error: %c <-> %c\n", c, buffer[0]);
    return (fail);
}