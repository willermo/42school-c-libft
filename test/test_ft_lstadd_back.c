/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:05:13 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:31:32 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "test.h"

t_result	test_ft_lstadd_back(t_list **lst, t_list *new, void (*print_list) (t_list *))
{
	t_list	*tmp;

	tmp = *lst;
	printf("List before ft_lstadd_back: ");
	print_list(*lst);
	ft_lstadd_back(lst, new);
	printf("List after ft_lstadd_back:  ");
	print_list(*lst);
	if (tmp == NULL)
	{
		if (*lst == new)
			return (pass);
		printf("New list head mismatch: %p <-> %p\n", *lst, new);
		return (fail);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	if (tmp == new)
		return (pass);
	printf("New list tail mismatch: %p <-> %p\n", tmp, new);
	return (fail);
}
