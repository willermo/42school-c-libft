/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:26:16 by doriani           #+#    #+#             */
/*   Updated: 2023/04/01 17:56:27 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_memmove(void *dest, const void *src, size_t n, size_t ma_size, int off)
{
	void    *r_lib;
    void    *r_ft;
    void    *copy;
    void    *copy_lib;
    void    *copy_ft;
    size_t  i;

    i = 0;
    printf("Dest address content:                  ");
    while (i < ma_size)
		printf("%2hhx ", ((unsigned char *) dest)[i++]);
	printf("\n");
    i = 0;
    printf("Src address content:                   ");
    while (i < ma_size - off)
		printf("%2hhx ", ((unsigned char *) src)[i++]);
	printf("\n");

	copy = malloc(ma_size);
	copy_lib = malloc(ma_size);
	copy_ft = malloc(ma_size);
	// creates a copy of the memory address
	copy = memcpy(copy, dest, ma_size);
	// r_lib contains the return value of memmove (pointer to s)
	r_lib = memmove(dest, src, n);
	// copies the result in copy_lib
	memcpy(copy_lib, r_lib, ma_size);
	//copies back the original memory address content
	memcpy(dest, copy, ma_size);
	// r_ft contains the return value of ft_memmove (pointer to s)
	r_ft = ft_memmove(dest, src, n);
	// copies the result in copy_ft
	memcpy(copy_ft, r_ft, ma_size);
	i = 0;
	printf("Dest address content after memmove:    ");
	while (i < ma_size)
		printf("%2hhx ", ((unsigned char *) copy_lib)[i++]);
	i = 0;
	printf("\n");
	printf("Dest address content after ft_memmove: ");
	while (i < ma_size)
		printf("%2hhx ", ((unsigned char *) copy_ft)[i++]);
	printf("\n");
	i = 0;
	unsigned int    val_lib;
	unsigned int    val_ft;
	while (i < ma_size)
	{
		val_lib = ((unsigned char *) copy_lib)[i];
		val_ft = ((unsigned char *) copy_ft)[i];
		if (val_lib != val_ft)
		{
			printf("failed at offset: %zu (%2hhx <-> %2hhx)\n", i, (unsigned char) val_lib, (unsigned char) val_ft);
			free(copy);
			free(copy_lib);
			free(copy_ft);
			return (fail);
		}
		i++;
	}
	if (r_lib != r_ft)
	{
		printf("Return value error: %p <-> %p\n", r_lib, r_ft);
		free(copy);
		free(copy_lib);
		free(copy_ft);
		return (fail);
	}
	free(copy);
	free(copy_lib);
	free(copy_ft);
	return (pass);
}
