/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:33:33 by doriani           #+#    #+#             */
/*   Updated: 2023/04/01 17:47:42 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_split(char const *s, char c, char **expected)
{
    char	**r_ft;
    int		i;

    printf("String: %s\n", s);
    printf("Char:   %c\n", c);
    r_ft = ft_split(s, c);
    i = 0;
    printf("Return value of ft_split: ");
    while (r_ft[i])
        printf("%s<<sep>>", r_ft[i++]);
    printf("\n");
    i = 0;
    printf("Expected:                 ");
    while (expected[i])
        printf("%s<<sep>>", expected[i++]);
    printf("\n");
    i = 0;
    while (expected[i])
    {
        if (strcmp(expected[i], r_ft[i]) != 0)
        {
            printf("Return value error: %s <-> %s\n", expected[i], r_ft[i]);
            for (int j = 0; r_ft[j]; j++)
                free(r_ft[j]);
            free(r_ft);
            return (fail);
        }
        i++;
    }
    for (int j = 0; r_ft[j]; j++)
        free(r_ft[j]);
    free(r_ft);
    return (pass);
}
