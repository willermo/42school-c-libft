/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:57:08 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:31:32 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "test.h"

t_result	test_ft_lstdelone(	t_list *lst, void (*del) (void *),
								void (*print_list) (t_list *))
{
	printf("List before ft_lstdelone: ");
	print_list(lst);
	ft_lstdelone(lst, del);
	lst = NULL;
	printf("List after ft_lstdelone:  ");
	print_list(lst);
	printf("This function cannot be properly tested, as there is no proper way"\
	"to check if the node or its content has been deleted.\n" \
	"(Could try a SIGABORT catch workaround).\n");
	return (manual_check);
}
