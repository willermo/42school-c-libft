/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:30:25 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:34:10 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "../test.h"

void
	tc_lstsize(  t_testcase **passed,
				t_testcase **failed,
				t_testcase **invalid,
				t_testcase **manual)
{
	t_result	result;
	t_list		*lst1;
	t_list		*lst2;
	t_list		*lst3;
	t_list		*lst4;
	t_list		*lst5;
	char		*str1;
	char		*str2;
	char		*str3;
	char		*str4;
	char		*str5;

	/* ft_lstsize test start */
	print_header(">> Testing ft_lstsize(t_list *lst) <<\n\n");
	// test 1
	print_testcase("-- Testing with lst = \"Hello\"");
	str1 = strdup("Hello");
	lst1 = ft_lstnew(str1);
	result = test_ft_lstsize(lst1, 1, print_string_list);
	add_result("ft_lstsize with lst = \"Hello\"",
		result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_string);
	// test 2
	print_testcase("-- Testing with lst = \"Hello\" -> \"World\"");
	str1 = strdup("Hello");
	str2 = strdup("World");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	ft_lstadd_front(&lst1, lst2);
	result = test_ft_lstsize(lst1, 2, print_string_list);
	add_result("ft_lstsize with lst = \"Hello\" -> \"World\"",
		result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_string);
	// test 3
	print_testcase("-- Testing with lst = \"Hello\" -> \"World\" -> \"Pippo\"");
	str1 = strdup("Hello");
	str2 = strdup("World");
	str3 = strdup("Pippo");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	ft_lstadd_front(&lst1, lst2);
	lst3 = ft_lstnew(str3);
	ft_lstadd_front(&lst1, lst3);
	result = test_ft_lstsize(lst1, 3, print_string_list);
	add_result("ft_lstsize with lst = \"Hello\" -> \"World\" -> \"Pippo\"",
		result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_string);
	// test 4
	print_testcase("-- Testing with lst = \"Hello\" -> \"World\" -> \"Pippo\" -> \"Pluto\"");
	str1 = strdup("Hello");
	str2 = strdup("World");
	str3 = strdup("Pippo");
	str4 = strdup("Pluto");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	ft_lstadd_front(&lst1, lst2);
	lst3 = ft_lstnew(str3);
	ft_lstadd_front(&lst1, lst3);
	lst4 = ft_lstnew(str4);
	ft_lstadd_front(&lst1, lst4);
	result = test_ft_lstsize(lst1, 4, print_string_list);
	add_result("ft_lstsize with lst = \"Hello\" -> \"World\" -> \"Pippo\" -> \"Pluto\"",
		result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_string);
	// test 5
	print_testcase("-- Testing with lst = \"Hello\" -> \"World\" -> \"Pippo\" -> \"Pluto\" -> \"Paperino\"");
	str1 = strdup("Hello");
	str2 = strdup("World");
	str3 = strdup("Pippo");
	str4 = strdup("Pluto");
	str5 = strdup("Paperino");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	ft_lstadd_front(&lst1, lst2);
	lst3 = ft_lstnew(str3);
	ft_lstadd_front(&lst1, lst3);
	lst4 = ft_lstnew(str4);
	ft_lstadd_front(&lst1, lst4);
	lst5 = ft_lstnew(str5);
	ft_lstadd_front(&lst1, lst5);
	result = test_ft_lstsize(lst1, 5, print_string_list);
	add_result("ft_lstsize with lst = \"Hello\" -> \"World\" -> \"Pippo\" -> \"Pluto\" -> \"Paperino\"",
		result, passed, failed, invalid, manual);
	ft_lstclear(&lst1, del_string);
	// test 6
	print_testcase("-- Testing with lst = NULL");
	result = test_ft_lstsize(NULL, 0, print_string_list);
	add_result("ft_lstsize with lst = NULL",
		result, passed, failed, invalid, manual);
	/* ft_lstsize test end */
}


