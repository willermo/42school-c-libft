/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:48:52 by doriani           #+#    #+#             */
/*   Updated: 2023/03/30 01:56:08 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_putendl_fd(char *s, int fd)
{
    char    *buffer;
    char    *expected;

    expected = malloc(sizeof(char) * (strlen(s) + 2));
    buffer = calloc(strlen(s) + 2, sizeof(char));
    strcpy(expected, s);
    strcat(expected, "\n");
    printf("String:                               %s\n", s);
    printf("File descriptor:                      %d\n", fd);
    ft_putendl_fd(s, fd);
    lseek(fd, 0, SEEK_SET);
    read(fd, buffer, strlen(s) + 1);
    printf("String written by test_ft_putendl_fd: %s\n", buffer);
    printf("Expected string:                      %s\n", expected);
    if (strcmp(buffer, expected) == 0)
    {
        free(buffer);
        free(expected);
        return (pass);
    }
    printf("Return value error: %s <-> %s\n", expected, buffer);
    free(buffer);
    free(expected);
    return (fail);
}