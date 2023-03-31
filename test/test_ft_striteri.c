/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:05:54 by doriani           #+#    #+#             */
/*   Updated: 2023/03/29 19:02:48 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_striteri(char *s,char *expected, void (*f)(unsigned int, char *))
{
    if (!s || !expected || !f)
        return (invalid);
    printf("String: %s\n", s);
    ft_striteri(s, f);
    printf("String content after ft_striteri: %s\n", s);
    printf("Expected:                         %s\n", expected);
    if (strcmp(expected, s) == 0)
        return (pass);
    printf("Return value error: %s <-> %s\n", expected, s);
    return (fail);
}