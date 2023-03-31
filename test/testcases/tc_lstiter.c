/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 21:50:33 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:34:10 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "../test.h"
#include <ctype.h>

void	tc_lstiter(	t_testcase **passed,
					t_testcase **failed,
					t_testcase **invalid,
					t_testcase **manual)
{
	t_result	result;
	t_list		*lst1;
	t_list		*lst2;
	t_list		*lst3;
	t_list		*expected_list1;
	t_list		*expected_list2;
	t_list		*expected_list3;
	char		*str1;
	char		*str2;
	char		*str3;
	char		*expected_str1;
	char		*expected_str2;
	char		*expected_str3;
	int			*int1;
	int			*int2;
	int			*int3;
	int			*expected_int1;
	int			*expected_int2;
	int			*expected_int3;

	/* ft_lstiter test start */
	print_header(">> Testing ft_lstiter(t_list *lst, void (*f) (void *)) <<\n\n");
	// test 1
	print_testcase("-- Testing with lst = \"Pippo\", \"Pluto\", \"Paperino\"");
	str1 = strdup("Pippo");
	str2 = strdup("Pluto");
	str3 = strdup("Paperino");
	expected_str1 = strdup("PIPPO");
	expected_str2 = strdup("PLUTO");
	expected_str3 = strdup("PAPERINO");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	lst3 = ft_lstnew(str3);
	lst1->next = lst2;
	lst2->next = lst3;
	expected_list1 = ft_lstnew(expected_str1);
	expected_list2 = ft_lstnew(expected_str2);
	expected_list3 = ft_lstnew(expected_str3);
	expected_list1->next = expected_list2;
	expected_list2->next = expected_list3;
	result = test_ft_lstiter(lst1, expected_list1, cmp_string_list, print_string_list, content_to_uppercase);
	add_result("ft_lstiter with lst = \"Pippo\"->\"Pluto\"->\"Paperino\"",
				result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_string);
	ft_lstclear(&expected_list1, del_string);
	// test 2
	print_testcase("-- Testing with lst = 1, 2, 3");
	int1 = malloc(sizeof(int));
	int2 = malloc(sizeof(int));
	int3 = malloc(sizeof(int));
	expected_int1 = malloc(sizeof(int));
	expected_int2 = malloc(sizeof(int));
	expected_int3 = malloc(sizeof(int));
	*int1 = 1;
	*int2 = 2;
	*int3 = 3;
	*expected_int1 = 2;
	*expected_int2 = 3;
	*expected_int3 = 4;
	lst1 = ft_lstnew(int1);
	lst2 = ft_lstnew(int2);
	lst3 = ft_lstnew(int3);
	lst1->next = lst2;
	lst2->next = lst3;
	expected_list1 = ft_lstnew(expected_int1);
	expected_list2 = ft_lstnew(expected_int2);
	expected_list3 = ft_lstnew(expected_int3);
	expected_list1->next = expected_list2;
	expected_list2->next = expected_list3;
	result = test_ft_lstiter(lst1, expected_list1, cmp_int_list, print_int_list, content_increment);
	add_result("ft_lstiter with lst = 1->2->3",
				result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_int);
	ft_lstclear(&expected_list1, del_int);
	// test 3
	print_testcase("-- Testing with lst = NULL");
	result = test_ft_lstiter(NULL, NULL, cmp_string_list, print_string_list, content_to_uppercase);
	add_result("ft_lstiter with lst = NULL",
				result, passed, failed, invalid, manual);
	/* ft_lstiter test end */
}
