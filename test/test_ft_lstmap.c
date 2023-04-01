/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 22:01:06 by doriani           #+#    #+#             */
/*   Updated: 2023/04/01 20:43:29 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "test.h"

t_result	test_ft_lstmap(t_list *lst, t_list *expected_list,
						int (*cmp_list) (t_list *, t_list *),
						void (*print_list) (t_list *),
						void *(*f) (void *), void (*del) (void *))
{
	t_list	*new_list;

	printf("Original list: ");
	print_list(lst);
	new_list = ft_lstmap(lst, f, del);
	printf("New list:      ");
	print_list(new_list);
	printf("Expected list: ");
	print_list(expected_list);
	if (cmp_list(new_list, expected_list) == 0)
	{
		ft_lstclear(&new_list, del);
		printf("Lists mismatch\n");
		return (fail);
	}
	ft_lstclear(&new_list, del);
	return (pass);
}
