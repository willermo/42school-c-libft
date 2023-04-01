/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:20:36 by doriani           #+#    #+#             */
/*   Updated: 2023/04/01 17:42:30 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_strjoin(char const *s1, char const *s2)
{
    char	*r_lib;
    char	*r_ft;

    if(!s1 || !s2)
        return (invalid);
    r_lib = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
    printf("String 1: %s\n", s1);
    printf("String 2: %s\n", s2);

    r_lib = strcpy(r_lib, s1);
    r_lib = strcat(r_lib, s2);
    r_ft = ft_strjoin(s1, s2);
    printf("Return value of strjoin:    %s\n", r_lib);
    printf("Return value of ft_strjoin: %s\n", r_ft);
    if (strcmp(r_lib, r_ft) == 0)
    {
        free(r_lib);
        free(r_ft);
        return (pass);
    }
    printf("Return value error: %s <-> %s\n", r_lib, r_ft);
    free(r_lib);
    free(r_ft);
    return (fail);
}
