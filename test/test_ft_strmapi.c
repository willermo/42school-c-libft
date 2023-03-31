/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:53:04 by doriani           #+#    #+#             */
/*   Updated: 2023/03/29 19:03:13 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_strmapi(char const *s, char *expected, char (*f)(unsigned int, char))
{
    char	*r_ft;

    if (!s || !expected || !f)
        return (invalid);
    printf("String: %s\n", s);
    r_ft = ft_strmapi(s, f);
    printf("Return value of ft_strmapi: %s\n", r_ft);
    printf("Expected:                   %s\n", expected);
    if (strcmp(expected, r_ft) == 0)
        return (pass);
    printf("Return value error: %s <-> %s\n", expected, r_ft);
    return (fail);
}