/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstiter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 21:45:13 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:31:32 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "test.h"

t_result	test_ft_lstiter(t_list *lst, t_list *expected_list,
						int (*cmp_list) (t_list *, t_list *),
						void (*print_list) (t_list *),
						void (*f) (void *))
{
	printf("List before ft_lstiter: ");
	print_list(lst);
	ft_lstiter(lst, f);
	printf("List after ft_lstiter:  ");
	print_list(lst);
	printf("Expected list:          ");
	print_list(expected_list);
	if (cmp_list(lst, expected_list) == 0)
	{
		printf("Lists mismatch\n");
		return (fail);
	}
	return (pass);
}
