/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:58:06 by doriani           #+#    #+#             */
/*   Updated: 2023/03/30 12:56:21 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int get_size(int n)
{
	int size;

	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

t_result	test_ft_putnbr_fd(int n, int fd, char *expected)
{
	char	*buffer;

	buffer = calloc(get_size(n) + 1, sizeof(char));
	printf("Number:                         %d\n", n);
	printf("File descriptor:                %d\n", fd);
	ft_putnbr_fd(n, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, buffer, get_size(n));
	printf("Number written by ft_putnbr_fd: %s\n", buffer);
	printf("Expected number:                %s\n", expected);
	if (strcmp(buffer, expected) == 0)
	{
		free(buffer);
		return (pass);
	}
	printf("Return value error: %s <-> %s\n", expected, buffer);
	free(buffer);
	return (fail);
}
