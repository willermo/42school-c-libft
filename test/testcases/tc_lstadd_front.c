/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:47:57 by doriani           #+#    #+#             */
/*   Updated: 2023/04/01 21:05:01 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "../test.h"

void
tc_lstadd_front(  t_testcase **passed,
				t_testcase **failed,
				t_testcase **invalid,
				t_testcase **manual)
{
	t_result	result;
	t_list		*list;
	t_list		*new;
	char		*str1;
	char		*str2;
	int			*int1;
	int			*int2;

	/* ft_lstadd_front test start */
	print_header(">> Testing ft_lstadd_front(t_list **lst, t_list *new) <<\n");
	// test 1
	print_testcase("-- Testing with lst = \"Hello\" and new = \"World\"");
	str1 = strdup("Hello");
	str2 = strdup("World");
	list = ft_lstnew(str1);
	new = ft_lstnew(str2);
	result = test_ft_lstadd_front(&list, new, print_string_list);
	add_result(	"ft_lstadd_front with lst = \"Hello\" and new = \"World\"",
				result, passed, failed, invalid, manual);
	ft_lstclear(&list, del_string);
	// test 2
	print_testcase("-- Testing with lst = \"0\" and new = \"1000\"");
	str1 = strdup("0");
	str2 = strdup("1000");
	list = ft_lstnew(str1);
	new = ft_lstnew(str2);
	result = test_ft_lstadd_front(&list, new, print_string_list);
	add_result(	"ft_lstadd_front with lst = \"0\" and new = \"1000\"",
				result, passed, failed, invalid, manual);
	ft_lstclear(&list, del_string);
	// test 3
	print_testcase("-- Testing with lst = \"\" and new = \"NULL\"");
	str1 = strdup("");
	list = ft_lstnew(str1);
	new = ft_lstnew(NULL);
	result = test_ft_lstadd_front(&list, new, print_string_list);
	add_result(	"ft_lstadd_front with lst = \"\" and new = \"NULL\"",
				result, passed, failed, invalid, manual);
	ft_lstclear(&list, del_string);
	// test 4
	print_testcase("-- Testing with lst = \"NULL\" and new = \"NULL\"");
	list = ft_lstnew(NULL);
	new = ft_lstnew(NULL);
	result = test_ft_lstadd_front(&list, new, print_string_list);
	add_result(	"ft_lstadd_front with lst = \"NULL\" and new = \"NULL\"",
				result, passed, failed, invalid, manual);
	ft_lstclear(&list, del_string);
	// test 5
	print_testcase("-- Testing with lst = \"NULL\" and new = \"Hello\"");
	str2 = strdup("Hello");
	list = ft_lstnew(NULL);
	new = ft_lstnew(str2);
	result = test_ft_lstadd_front(&list, new, print_string_list);
	add_result(	"ft_lstadd_front with lst = \"NULL\" and new = \"Hello\"",
				result, passed, failed, invalid, manual);
	ft_lstclear(&list, del_string);
	// test 6
	int1 = malloc(sizeof(int));
	*int1 = 0;
	int2 = malloc(sizeof(int));
	*int2 = 1000;
	print_testcase("-- Testing with lst = 0 and new = 1000");
	list = ft_lstnew(int1);
	new = ft_lstnew(int2);
	result = test_ft_lstadd_front(&list, new, print_int_list);
	add_result(	"ft_lstadd_front with lst = 0 and new = 1000",
				result, passed, failed, invalid, manual);
	ft_lstclear(&list, del_int);
	// test 7
	int1 = malloc(sizeof(int));
	*int1 = 0;
	print_testcase("-- Testing with lst = 0 and new = NULL");
	list = ft_lstnew(int1);
	new = ft_lstnew(NULL);
	result = test_ft_lstadd_front(&list, new, print_int_list);
	add_result(	"ft_lstadd_front with lst = 0 and new = NULL",
				result, passed, failed, invalid, manual);
	ft_lstclear(&list, del_int);
	// test 8
	int2 = malloc(sizeof(int));
	*int2 = 0;
	print_testcase("-- Testing with lst = NULL and new = 0");
	list = ft_lstnew(NULL);
	new = ft_lstnew(int2);
	result = test_ft_lstadd_front(&list, new, print_int_list);
	add_result(	"ft_lstadd_front with lst = NULL and new = 0",
				result, passed, failed, invalid, manual);
	ft_lstclear(&list, del_int);
	/* ft_lstadd_front test end*/
}
