/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:04:38 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:34:10 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "../test.h"

void	tc_lstdelone(	t_testcase **passed,
						t_testcase **failed,
						t_testcase **invalid,
						t_testcase **manual)
{
	t_result	result;
	t_list		*lst;
	char		*str1;
	int			*int1;

	/* ft_lstdelone test start */
	print_header(">> Testing ft_lstdelone(t_list *lst, void (*del) (void *)) <<\n\n");
	// test 1
	str1 = strdup("Pippo");
	print_testcase("-- Testing with lst = \"Pippo\"");
	lst = ft_lstnew(str1);
	result = test_ft_lstdelone(lst, del_string, print_string_list);
	add_result(	"ft_lstdelone with lst = \"Pippo\"",
				result, passed, failed, invalid, manual);
	// test 2
	int1 = malloc(sizeof(int));
	*int1 = 42;
	print_testcase("-- Testing with lst = 42");
	lst = ft_lstnew(int1);
	result = test_ft_lstdelone(lst, del_int, print_int_list);
	add_result(	"ft_lstdelone with lst = 42",
				result, passed, failed, invalid, manual);
	/* ft_lstdelone test end */
}



