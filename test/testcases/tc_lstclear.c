/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 21:36:53 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:34:10 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "../test.h"

void	tc_lstclear(	t_testcase **passed,
						t_testcase **failed,
						t_testcase **invalid,
						t_testcase **manual)
{
	t_result	result;
	t_list		*lst;
	char		*str1;
	char		*str2;
	char		*str3;
	char		*str4;
	int			*int1;
	int			*int2;
	int			*int3;
	int			*int4;

	/* ft_lstclear test start */
	print_header(">> Testing ft_lstclear(t_list **lst, void (*del) (void *)) <<\n\n");
	// test 1
	print_testcase("-- Testing with lst = \"Pippo\"");
	str1 = strdup("Pippo");
	lst = ft_lstnew(str1);
	result = test_ft_lstclear(&lst, del_string, print_string_list);
	add_result(	"ft_lstclear with lst = \"Pippo\"",
				result, passed, failed, invalid, manual);
	// test 2
	print_testcase("-- Testing with lst = \"Pippo\"->\"Pluto\"");
	str1 = strdup("Pippo");
	str2 = strdup("Pluto");
	lst = ft_lstnew(str1);
	lst->next = ft_lstnew(str2);
	result = test_ft_lstclear(&lst, del_string, print_string_list);
	add_result(	"ft_lstclear with lst = \"Pippo\"->\"Pluto\"",
				result, passed, failed, invalid, manual);
	// test 3
	print_testcase("-- Testing with lst = \"Pippo\"->\"Pluto\"->\"Paperino\"");
	str1 = strdup("Pippo");
	str2 = strdup("Pluto");
	str3 = strdup("Paperino");
	lst = ft_lstnew(str1);
	lst->next = ft_lstnew(str2);
	lst->next->next = ft_lstnew(str3);
	result = test_ft_lstclear(&lst, del_string, print_string_list);
	add_result(	"ft_lstclear with lst = \"Pippo\"->\"Pluto\"->\"Paperino\"",
				result, passed, failed, invalid, manual);
	// test 4
	print_testcase("-- Testing with lst = \"Pippo\"->\"Pluto\"->\"Paperino\"->\"Topolino\"");
	str1 = strdup("Pippo");
	str2 = strdup("Pluto");
	str3 = strdup("Paperino");
	str4 = strdup("Topolino");
	lst = ft_lstnew(str1);
	lst->next = ft_lstnew(str2);
	lst->next->next = ft_lstnew(str3);
	lst->next->next->next = ft_lstnew(str4);
	result = test_ft_lstclear(&lst, del_string, print_string_list);
	add_result(	"ft_lstclear with lst = \"Pippo\"->\"Pluto\"->\"Paperino\"->\"Topolino\"",
				result, passed, failed, invalid, manual);
	// test 5
	int1 = malloc(sizeof(int));
	*int1 = 42;
	print_testcase("-- Testing with lst = 42");
	lst = ft_lstnew(int1);
	result = test_ft_lstclear(&lst, del_int, print_int_list);
	add_result(	"ft_lstclear with lst = 42",
				result, passed, failed, invalid, manual);
	// test 6
	print_testcase("-- Testing with lst = 42->43");
	int1 = malloc(sizeof(int));
	*int1 = 42;
	int2 = malloc(sizeof(int));
	*int2 = 43;
	lst = ft_lstnew(int1);
	lst->next = ft_lstnew(int2);
	result = test_ft_lstclear(&lst, del_int, print_int_list);
	add_result(	"ft_lstclear with lst = 42->43",
				result, passed, failed, invalid, manual);
	// test 7
	print_testcase("-- Testing with lst = 42->43->44");
	int1 = malloc(sizeof(int));
	*int1 = 42;
	int2 = malloc(sizeof(int));
	*int2 = 43;
	int3 = malloc(sizeof(int));
	*int3 = 44;
	lst = ft_lstnew(int1);
	lst->next = ft_lstnew(int2);
	lst->next->next = ft_lstnew(int3);
	result = test_ft_lstclear(&lst, del_int, print_int_list);
	add_result(	"ft_lstclear with lst = 42->43->44",
				result, passed, failed, invalid, manual);
	// test 8
	print_testcase("-- Testing with lst = 42->43->44->45");
	int1 = malloc(sizeof(int));
	*int1 = 42;
	int2 = malloc(sizeof(int));
	*int2 = 43;
	int3 = malloc(sizeof(int));
	*int3 = 44;
	int4 = malloc(sizeof(int));
	*int4 = 45;
	lst = ft_lstnew(int1);
	lst->next = ft_lstnew(int2);
	lst->next->next = ft_lstnew(int3);
	lst->next->next->next = ft_lstnew(int4);
	result = test_ft_lstclear(&lst, del_int, print_int_list);
	add_result(	"ft_lstclear with lst = 42->43->44->45",
				result, passed, failed, invalid, manual);
	// test 9
	print_testcase("-- Testing with lst = NULL");
	lst = NULL;
	result = test_ft_lstclear(&lst, del_string, print_string_list);
	add_result(	"ft_lstclear with lst = NULL",
				result, passed, failed, invalid, manual);
	/* ft_lstclear test end */
}
