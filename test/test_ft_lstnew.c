/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:33:58 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:29:39 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "test.h"

t_result	test_ft_lstnew(void *content, void (*print_list) (t_list *))
{
	t_list	*list;

	list = ft_lstnew(content);
	printf("List: ");
	print_list(list);
	if (list == NULL)
	{
		printf("List is NULL\n");
		return (fail);
	}
	if (list->next != NULL)
	{
		printf("Next pointer is not NULL: %p\n", list->next);
		free(list);
		return (fail);
	}
	if (list->content == content)
	{
		free(list);
		return (pass);
	}
	printf("Content address mismatch: %p <-> %p\n", content, list->content);
	free(list);
	return (fail);
}
