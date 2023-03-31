/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 22:03:59 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:34:10 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "../test.h"

void	tc_lstmap(	t_testcase **passed,
					t_testcase **failed,
					t_testcase **invalid,
					t_testcase **manual)
{
	t_result	result;
	t_list		*lst1;
	t_list		*lst2;
	t_list		*lst3;
	t_list		*lst4;
	t_list		*expected_lst1;
	t_list		*expected_lst2;
	t_list		*expected_lst3;
	t_list		*expected_lst4;
	char		*str1;
	char		*str2;
	char		*str3;
	char		*str4;
	char		*expected_str1;
	char		*expected_str2;
	char		*expected_str3;
	char		*expected_str4;
	int			*int1;
	int			*int2;
	int			*int3;
	int			*int4;
	int			*expected_int1;
	int			*expected_int2;
	int			*expected_int3;
	int			*expected_int4;

	/* ft_lstmap test start */
	print_header(">> Testing ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *)) <<\n\n");
	// test 1
	print_testcase("-- Testing with lst = \"Pippo\"");
	str1 = strdup("Pippo");
	expected_str1 = strdup("PIPPO");
	lst1 = ft_lstnew(str1);
	expected_lst1 = ft_lstnew(expected_str1);
	result = test_ft_lstmap(lst1, expected_lst1, cmp_string_list,
						print_string_list, get_uppercase, del_string);
	add_result(	"ft_lstmap with lst = \"Pippo\"",
				result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_string);
	ft_lstclear(&expected_lst1, del_string);
	// test 2
	print_testcase("-- Testing with lst = \"Pippo\", \"Pluto\"");
	str1 = strdup("Pippo");
	str2 = strdup("Pluto");
	expected_str1 = strdup("PIPPO");
	expected_str2 = strdup("PLUTO");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	ft_lstadd_back(&lst1, lst2);
	expected_lst1 = ft_lstnew(expected_str1);
	expected_lst2 = ft_lstnew(expected_str2);
	ft_lstadd_back(&expected_lst1, expected_lst2);
	result = test_ft_lstmap(lst1, expected_lst1, cmp_string_list,
						print_string_list, get_uppercase, del_string);
	add_result(	"ft_lstmap with lst = \"Pippo\", \"Pluto\"",
				result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_string);
	ft_lstclear(&expected_lst1, del_string);
	// test 3
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
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	expected_lst1 = ft_lstnew(expected_str1);
	expected_lst2 = ft_lstnew(expected_str2);
	expected_lst3 = ft_lstnew(expected_str3);
	ft_lstadd_back(&expected_lst1, expected_lst2);
	ft_lstadd_back(&expected_lst1, expected_lst3);
	result = test_ft_lstmap(lst1, expected_lst1, cmp_string_list,
						print_string_list, get_uppercase, del_string);
	add_result(	"ft_lstmap with lst = \"Pippo\", \"Pluto\", \"Paperino\"",
				result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_string);
	ft_lstclear(&expected_lst1, del_string);
	// test 4
	print_testcase("-- Testing with lst = \"Pippo\", \"Pluto\", \"Paperino\", \"Topolino\"");
	str1 = strdup("Pippo");
	str2 = strdup("Pluto");
	str3 = strdup("Paperino");
	str4 = strdup("Topolino");
	expected_str1 = strdup("PIPPO");
	expected_str2 = strdup("PLUTO");
	expected_str3 = strdup("PAPERINO");
	expected_str4 = strdup("TOPOLINO");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	lst3 = ft_lstnew(str3);
	lst4 = ft_lstnew(str4);
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	ft_lstadd_back(&lst1, lst4);
	expected_lst1 = ft_lstnew(expected_str1);
	expected_lst2 = ft_lstnew(expected_str2);
	expected_lst3 = ft_lstnew(expected_str3);
	expected_lst4 = ft_lstnew(expected_str4);
	ft_lstadd_back(&expected_lst1, expected_lst2);
	ft_lstadd_back(&expected_lst1, expected_lst3);
	ft_lstadd_back(&expected_lst1, expected_lst4);
	result = test_ft_lstmap(lst1, expected_lst1, cmp_string_list,
						print_string_list, get_uppercase, del_string);
	add_result(	"ft_lstmap with lst = \"Pippo\", \"Pluto\", \"Paperino\", \"Topolino\"",
				result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_string);
	ft_lstclear(&expected_lst1, del_string);
	// test 5
	print_testcase("-- Testing with lst = 1");
	int1 = malloc(sizeof(int));
	*int1 = 1;
	expected_int1 = malloc(sizeof(int));
	*expected_int1 = 2;
	lst1 = ft_lstnew(int1);
	expected_lst1 = ft_lstnew(expected_int1);
	result = test_ft_lstmap(lst1, expected_lst1, cmp_int_list,
						print_int_list, get_incremented, del_int);
	add_result(	"ft_lstmap with lst = 1",
				result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_int);
	ft_lstclear(&expected_lst1, del_int);
	// test 6
	print_testcase("-- Testing with lst = 1, 2");
	int1 = malloc(sizeof(int));
	*int1 = 1;
	int2 = malloc(sizeof(int));
	*int2 = 2;
	expected_int1 = malloc(sizeof(int));
	*expected_int1 = 2;
	expected_int2 = malloc(sizeof(int));
	*expected_int2 = 3;
	lst1 = ft_lstnew(int1);
	lst2 = ft_lstnew(int2);
	ft_lstadd_back(&lst1, lst2);
	expected_lst1 = ft_lstnew(expected_int1);
	expected_lst2 = ft_lstnew(expected_int2);
	ft_lstadd_back(&expected_lst1, expected_lst2);
	result = test_ft_lstmap(lst1, expected_lst1, cmp_int_list,
						print_int_list, get_incremented, del_int);
	add_result(	"ft_lstmap with lst = 1, 2",
				result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_int);
	ft_lstclear(&expected_lst1, del_int);
	// test 7
	print_testcase("-- Testing with lst = 1, 2, 3");
	int1 = malloc(sizeof(int));
	*int1 = 1;
	int2 = malloc(sizeof(int));
	*int2 = 2;
	int3 = malloc(sizeof(int));
	*int3 = 3;
	expected_int1 = malloc(sizeof(int));
	*expected_int1 = 2;
	expected_int2 = malloc(sizeof(int));
	*expected_int2 = 3;
	expected_int3 = malloc(sizeof(int));
	*expected_int3 = 4;
	lst1 = ft_lstnew(int1);
	lst2 = ft_lstnew(int2);
	lst3 = ft_lstnew(int3);
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	expected_lst1 = ft_lstnew(expected_int1);
	expected_lst2 = ft_lstnew(expected_int2);
	expected_lst3 = ft_lstnew(expected_int3);
	ft_lstadd_back(&expected_lst1, expected_lst2);
	ft_lstadd_back(&expected_lst1, expected_lst3);
	result = test_ft_lstmap(lst1, expected_lst1, cmp_int_list,
						print_int_list, get_incremented, del_int);
	add_result(	"ft_lstmap with lst = 1, 2, 3",
				result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_int);
	ft_lstclear(&expected_lst1, del_int);
	// test 8
	print_testcase("-- Testing with lst = 1, 2, 3, 4");
	int1 = malloc(sizeof(int));
	*int1 = 1;
	int2 = malloc(sizeof(int));
	*int2 = 2;
	int3 = malloc(sizeof(int));
	*int3 = 3;
	int4 = malloc(sizeof(int));
	*int4 = 4;
	expected_int1 = malloc(sizeof(int));
	*expected_int1 = 2;
	expected_int2 = malloc(sizeof(int));
	*expected_int2 = 3;
	expected_int3 = malloc(sizeof(int));
	*expected_int3 = 4;
	expected_int4 = malloc(sizeof(int));
	*expected_int4 = 5;
	lst1 = ft_lstnew(int1);
	lst2 = ft_lstnew(int2);
	lst3 = ft_lstnew(int3);
	lst4 = ft_lstnew(int4);
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	ft_lstadd_back(&lst1, lst4);
	expected_lst1 = ft_lstnew(expected_int1);
	expected_lst2 = ft_lstnew(expected_int2);
	expected_lst3 = ft_lstnew(expected_int3);
	expected_lst4 = ft_lstnew(expected_int4);
	ft_lstadd_back(&expected_lst1, expected_lst2);
	ft_lstadd_back(&expected_lst1, expected_lst3);
	ft_lstadd_back(&expected_lst1, expected_lst4);
	result = test_ft_lstmap(lst1, expected_lst1, cmp_int_list,
						print_int_list, get_incremented, del_int);
	add_result(	"ft_lstmap with lst = 1, 2, 3, 4",
				result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_int);
	ft_lstclear(&expected_lst1, del_int);
	// test 9
	print_testcase("-- Testing with lst = NULL");
	result = test_ft_lstmap(NULL, NULL, cmp_int_list,
						print_int_list, get_incremented, del_int);
	add_result(	"ft_lstmap with lst = NULL",
				result, passed, failed, invalid, manual);
	/* ft_lstmap test end */
}
