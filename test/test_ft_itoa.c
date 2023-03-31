/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:45:27 by doriani           #+#    #+#             */
/*   Updated: 2023/03/29 11:46:37 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_itoa(int n, char *expected)
{
    char	*r_ft;

    printf("Integer: %d\n", n);
    r_ft = ft_itoa(n);
    printf("Return value of ft_itoa: %s\n", r_ft);
    printf("Expected:                %s\n", expected);
    if (strcmp(expected, r_ft) == 0)
        return (pass);
    printf("Return value error: %s <-> %s\n", expected, r_ft);
    return (fail);
}