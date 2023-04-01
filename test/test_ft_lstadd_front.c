/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstadd_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:43:58 by doriani           #+#    #+#             */
/*   Updated: 2023/04/01 21:04:12 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "test.h"

t_result	test_ft_lstadd_front(t_list **lst, t_list *new, void (*print_list) (t_list *))
{
	t_list	*tmp;

	if (*lst == NULL || new == NULL)
		return (invalid);
	tmp = *lst;
	printf("List before ft_lstadd_front: ");
	print_list(*lst);
	ft_lstadd_front(lst, new);
	printf("List after ft_lstadd_front:  ");
	print_list(*lst);
	if (*lst == new)
	{
		if (new->next == tmp)
			return (pass);
		printf("New list head next pointer mismatch: %p <-> %p\n", new->next, tmp);
		return (fail);
	}
	printf("New list head mismatch: %p <-> %p\n", *lst, new);
	return (fail);
}
