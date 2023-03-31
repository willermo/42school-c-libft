/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:57:59 by doriani           #+#    #+#             */
/*   Updated: 2023/03/30 01:56:22 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_putstr_fd(char *s, int fd)
{
    char *buffer;
    int i;

    buffer = calloc(strlen(s) + 1, sizeof(char));
    printf("String:                         %s\n", s);
    printf("File descriptor:                %d\n", fd);
    ft_putstr_fd(s, fd);
    lseek(fd, 0, SEEK_SET);
    read(fd, buffer, strlen(s));
    printf("String written by ft_putstr_fd: %s\n", buffer);
    i = 0;
    while (s[i])
    {
        if (s[i] != buffer[i])
        {
            printf("Return value error: %s <-> %s\n", s, buffer);
            return (fail);
        }
        i++;
    }
    return (pass);
}