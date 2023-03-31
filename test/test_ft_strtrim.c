/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:22:07 by doriani           #+#    #+#             */
/*   Updated: 2023/03/29 23:18:14 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_strtrim(char const *s1, char const *set, char *expected)
{
    char	*r_ft;

    printf("String 1: %s\n", s1);
    printf("Set:      %s\n", set);

    r_ft = ft_strtrim(s1, set);
    printf("Return value of ft_strtrim: %s\n", r_ft);
    printf("Expected:                   %s\n", expected);
    if (strcmp(expected, r_ft) == 0)
        return (pass);
    printf("Return value error: %s <-> %s\n", expected, r_ft);
    return (fail);
}