/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/04/01 17:58:11 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_strlcpy(char *dst, const char *src, size_t size, size_t ma_size)
{
	size_t	r_lib;
    size_t	r_ft;
	char	*copy;
	char	*copy_lib;
	char	*copy_ft;

	if (!dst || !src)
	{
		printf("Invalid test: dst, src or both point to NULL\n");
		return (invalid);
	}
	if (ma_size < size)
	{
		printf("Buffer overrun: dst buffer is not large enough\n");
		return (invalid);
	}
	copy = (char *) malloc(ma_size);
	copy_lib = (char *) malloc(ma_size);
	copy_ft = (char *) malloc(ma_size);
    printf("src: %s\n", src);
    printf("dst: %s\n", dst);
	copy = (char *) memcpy(copy, dst, ma_size);

	// r_lib contains the return value of strlcpy
	r_lib = strlcpy(dst, src, size);
	copy_lib = (char *) memcpy(copy_lib, dst, ma_size);
	// copies back dst
	dst = (char *) memcpy(dst, copy, ma_size);
	// r_ft contains the return value of ft_strlcpy
	r_ft = ft_strlcpy(dst, src, size);
	copy_ft = (char *) memcpy(copy_ft, dst, ma_size);
	printf("String copied by by strlcpy:    %s\n", copy_lib);
	printf("String copied by by ft_strlcpy: %s\n", copy_ft);
	if (strcmp(copy_lib, copy_ft) != 0)
	{
		printf("Strings differ.\n");
		free(copy);
		free(copy_lib);
		free(copy_ft);
		return (fail);
	}
	free(copy);
	free(copy_lib);
	free(copy_ft);
	if (r_lib != r_ft)
	{
		printf("Return value error: %lu <-> %lu\n", r_lib, r_ft);
		return (fail);
	}
	return (pass);
}
