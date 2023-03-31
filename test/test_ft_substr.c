/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:24:32 by doriani           #+#    #+#             */
/*   Updated: 2023/03/29 17:33:06 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_substr(char const *s, unsigned int start, size_t len, char *expected)
{
    char	*r_ft;

    printf("String: %s\n", s);
    printf("Start:  %d\n", start);
    printf("Len:    %zu\n", len);

    r_ft = ft_substr(s, start, len);
    printf("Return value of ft_substr: %s\n", r_ft);
    printf("Expected substring:        %s\n", expected);
    if (strcmp(expected, r_ft) == 0)
        return (pass);
    printf("Return value error: %s <-> %s\n", expected, r_ft);
    return (fail);
}