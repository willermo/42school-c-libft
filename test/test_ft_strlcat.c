/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/04/01 17:59:11 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_strlcat(char *dest, const char *src, size_t size, size_t ma_size)
{
	size_t	r_lib;
    size_t	r_ft;
	char	*copy;
	char	*copy_lib;
	char	*copy_ft;
	size_t	i;

	if (!dest || !src)
	{
		printf("Invalid test: Dest, src or both point to NULL\n");
		return (invalid);
	}
	if (dest[strlen(dest)] != 0 || src[strlen(src)] != 0)
	{
		printf("Invalid test: dest, src, or both are not NULL terminated\n");
		return (invalid);
	}
	if (ma_size < size)
	{
		printf("Buffer overrun: dest buffer is not large enough\n");
		return (invalid);
	}
	copy = (char *) malloc(ma_size);
	copy_lib = (char *) malloc(ma_size);
	copy_ft = (char *) malloc(ma_size);
    printf("src:  %s\n", src);
    printf("dest: %s\n", dest);
	copy = (char *) memcpy(copy, dest, ma_size);

	// r_lib contains the return value of strcat
	r_lib = strlcat(dest, src, size);
	copy_lib = memcpy(copy_lib, dest, ma_size);
	// copies back dest
	dest = (char *) memcpy(dest, copy, ma_size);
	// r_ft contains the return value of ft_strcat
	r_ft = ft_strlcat(dest, src, size);
	copy_ft = memcpy(copy_ft, dest, ma_size);
	printf("Concatenation by strlcat:    %s\n", copy_lib);
	printf("Concatenation by ft_strlcat: %s\n", copy_ft);
	i = 0;
	printf("Memory content after strlcat:    ");
	while (i < ma_size)
		printf("%2hhx ", ((unsigned char *) copy_lib)[i++]);
	printf("\n");
	i = 0;
	printf("Memory content after ft_strlcat: ");
	while (i < ma_size)
		printf("%2hhx ", ((unsigned char *) copy_ft)[i++]);
	printf("\n");
	if (memcmp(copy_lib, copy_ft, ma_size) != 0)
	{
		printf("Memory content differ.\n");
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
