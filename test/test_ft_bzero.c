/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:53:14 by doriani           #+#    #+#             */
/*   Updated: 2023/03/22 19:29:34 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_result	test_ft_bzero(void *s, size_t n, size_t ma_size)
{
	void	*copy;
	void	*copy_lib;
	void	*copy_ft;
	size_t	i;

	i = 0;
	printf("Memory address content:                ");
	while (i < ma_size)
		printf("%2hhx ", ((unsigned char *) s)[i++]);
	printf("\nBuffer size: %zu\n", n);
	copy = malloc(ma_size);
	copy_lib = malloc(ma_size);
	copy_ft = malloc(ma_size);
	// creates a copy of the memory address
	copy = memcpy(copy, s, ma_size);
	bzero(s, n);
	// copies the result in copy_lib
	memcpy(copy_lib, s, ma_size);
	//copies back the original memory address content
	memcpy(s, copy, ma_size);
	ft_bzero(s, n);
	// copies the result in copy_ft
	memcpy(copy_ft, s, ma_size);
	i = 0;
	printf("Memory address content after bzero:    ");
	while (i < ma_size)
		printf("%2hhx ", ((unsigned char *) copy_lib)[i++]);
	i = 0;
	printf("\n");
	printf("Memory address content after ft_bzero: ");
	while (i < ma_size)
		printf("%2hhx ", ((unsigned char *) copy_ft)[i++]);
	printf("\n");
	i = 0;
	unsigned int	val_lib;
	unsigned int	val_ft;
	while (i < ma_size)
	{
		val_lib = ((unsigned char *) copy_lib)[i];
		val_ft = ((unsigned char *) copy_ft)[i];
		if (val_lib != val_ft)
		{
			printf("failed at offset: %zu (%2hhx <-> %2hhx)\n", i, (unsigned char)val_lib, (unsigned char)val_ft);
			return (fail);
		}
		i++;
	}
	return (pass);
}
