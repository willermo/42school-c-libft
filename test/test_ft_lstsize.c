/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:28:02 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:32:05 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "test.h"

t_result	test_ft_lstsize(t_list *lst, size_t expected_size, void (*print_list) (t_list *))
{
	size_t		size;

	size = ft_lstsize(lst);
	printf("List: ");
	print_list(lst);
	printf("Expected size: %ld\n", expected_size);
	printf("Actual size:   %ld\n", size);
	if (size == expected_size)
		return (pass);
	printf("Size mismatch: %ld <-> %ld\n", size, expected_size);
	return (fail);
}
