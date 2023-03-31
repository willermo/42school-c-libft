/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:02:20 by doriani           #+#    #+#             */
/*   Updated: 2023/03/30 01:15:28 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_calloc(size_t count, size_t size)
{
    void	*r_lib;
    void	*r_ft;
    size_t	i;    

    printf("Count: %zu\n", count);
    printf("Size: %zu\n", size);

    r_lib = calloc(count, size);
    r_ft = ft_calloc(count, size);
	if (r_lib && !r_ft)
    {
        printf("ft_memalloc returned NULL while calloc didn't\n");
        free(r_lib);
        return (fail);
    }
	if (!r_lib && !r_ft)
	{
		printf("Both calloc and ft_calloc returned NULL\n");
		return (pass);
	}
    i = 0;
	printf("Memory content after calloc:    ");
	while (i < count * size && i < 21)
		printf("%2x ", ((unsigned char *)r_lib)[i++]);
	if (i == 21)
		printf("...");
	printf("\n");
	i = 0;
	printf("Memory content after ft_calloc: ");
	while (i < count * size && i < 21)
		printf("%2x ", ((unsigned char *)r_ft)[i++]);
	if (i == 21)
		printf("...");
	printf("\n");
    if (memcmp(r_lib, r_ft, count * size) != 0)
    {
        printf("Memory content differ\n");
        free(r_lib);
        free(r_ft);
        return (fail);
    }
    free(r_lib);
    free(r_ft);
	return (pass);
}