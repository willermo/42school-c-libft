/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstclear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:57:08 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:31:32 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "test.h"

t_result	test_ft_lstclear(t_list **lst, void (*del) (void *),
								void (*print_list) (t_list *))
{
	printf("List before ft_lstclear: ");
	print_list(*lst);
	ft_lstclear(lst, del);
	printf("List after ft_lstclear:  ");
	print_list(*lst);
	if (*lst == NULL)
		return (pass);
	printf("Node is not NULL: %p\n", *lst);
	return (fail);
}
