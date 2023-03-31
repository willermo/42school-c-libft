/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:37:58 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:31:32 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "test.h"

t_result	test_ft_lstlast(t_list *lst, t_list *expected_last, void (*print_list) (t_list *))
{
	t_list	*last;

	last = ft_lstlast(lst);
	printf("List: ");
	print_list(lst);
	if (last == NULL && lst != NULL)
	{
		printf("Last element is marked as NULL but list has %d non-null elements\n", ft_lstsize(lst));
		return (fail);
	}
	if (last != NULL)
		printf("Last element: %p\n", last);
	else
	{
		printf("Last element: NULL\n");
		return (pass);
	}
	if (last->next != NULL)
	{
		printf("Last element next pointer is not NULL: %p\n", last->next);
		return (fail);
	}
	if (last != expected_last)
		printf("Last element mismatch: %p <-> %p\n", last, expected_last);
	if (last->next == NULL && last == expected_last)
		return (pass);
	return (fail);
}
