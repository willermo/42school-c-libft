/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:09:27 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:34:10 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "../test.h"

void	tc_lstadd_back( t_testcase **passed,
						t_testcase **failed,
						t_testcase **invalid,
						t_testcase **manual)
{
	t_result	result;
	t_list		*lst1;
	t_list		*lst2;
	t_list		*lst3;
	t_list		*lst4;
	t_list		*new;
	char		*str1;
	char		*str2;
	char		*str3;
	char		*str4;
	char		*str5;
	int			*int1;
	int			*int2;
	int			*int3;
	int			*int4;
	int			*int5;

	/* ft_lstadd_back test start */
	print_header(">> Testing ft_lstadd_back(t_list **lst, t_list *new) <<\n\n");
	// test 1
	print_testcase("-- Testing with lst = \"Hello\" amd new = \"World\"");
	str1 = strdup("Hello");
	str2 = strdup("World");
	lst1 = ft_lstnew(str1);
	new = ft_lstnew(str2);
	result = test_ft_lstadd_back(&lst1, new, print_string_list);
	add_result("ft_lstadd_back with lst = \"Hello\" and new = \"World\"",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_string);
	// test 2
	print_testcase("-- Testing with lst = \"Hello\" -> \"World\" and new = \"Pippo\"");
	str1 = strdup("Hello");
	str2 = strdup("World");
	str3 = strdup("Pippo");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	lst1->next = lst2;
	new = ft_lstnew(str3);
	result = test_ft_lstadd_back(&lst1, new, print_string_list);
	add_result("ft_lstadd_back with lst = \"Hello\" -> \"World\" and new = \"Pippo\"",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_string);
	// test 3
	print_testcase("-- Testing with lst = \"Hello\" -> \"World\" -> \"Pippo\" and new = \"Pluto\"");
	str1 = strdup("Hello");
	str2 = strdup("World");
	str3 = strdup("Pippo");
	str4 = strdup("Pluto");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	lst3 = ft_lstnew(str3);
	lst1->next = lst2;
	lst2->next = lst3;
	new = ft_lstnew(str4);
	result = test_ft_lstadd_back(&lst1, new, print_string_list);
	add_result("ft_lstadd_back with lst = \"Hello\" -> \"World\" -> \"Pippo\" and new = \"Pluto\"",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_string);
	// test 4
	print_testcase("-- Testing with lst = \"Hello\" -> \"World\" -> \"Pippo\" -> \"Pluto\" and new = \"Paperino\"");
	str1 = strdup("Hello");
	str2 = strdup("World");
	str3 = strdup("Pippo");
	str4 = strdup("Pluto");
	str5 = strdup("Paperino");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	lst3 = ft_lstnew(str3);
	lst4 = ft_lstnew(str4);
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	new = ft_lstnew(str5);
	result = test_ft_lstadd_back(&lst1, new, print_string_list);
	add_result("ft_lstadd_back with lst = \"Hello\" -> \"World\" -> \"Pippo\" -> \"Pluto\" and new = \"Paperino\"",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_string);
	// test 5
	print_testcase("-- Testing with lst = 1 amd new = 2");
	int1 = malloc(sizeof(int));
	int2 = malloc(sizeof(int));
	*int1 = 1;
	*int2 = 2;
	lst1 = ft_lstnew(int1);
	new = ft_lstnew(int2);
	result = test_ft_lstadd_back(&lst1, new, print_int_list);
	add_result("ft_lstadd_back with lst = 1 and new = 2",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_int);
	// test 6
	print_testcase("-- Testing with lst = 1 -> 2 and new = 3");
	int1 = malloc(sizeof(int));
	int2 = malloc(sizeof(int));
	int3 = malloc(sizeof(int));
	*int1 = 1;
	*int2 = 2;
	*int3 = 3;
	lst1 = ft_lstnew(int1);
	lst2 = ft_lstnew(int2);
	lst1->next = lst2;
	new = ft_lstnew(int3);
	result = test_ft_lstadd_back(&lst1, new, print_int_list);
	add_result("ft_lstadd_back with lst = 1 -> 2 and new = 3",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_int);
	// test 7
	print_testcase("-- Testing with lst = 1 -> 2 -> 3 and new = 4");
	int1 = malloc(sizeof(int));
	int2 = malloc(sizeof(int));
	int3 = malloc(sizeof(int));
	int4 = malloc(sizeof(int));
	*int1 = 1;
	*int2 = 2;
	*int3 = 3;
	*int4 = 4;
	lst1 = ft_lstnew(int1);
	lst2 = ft_lstnew(int2);
	lst3 = ft_lstnew(int3);
	lst1->next = lst2;
	lst2->next = lst3;
	new = ft_lstnew(int4);
	result = test_ft_lstadd_back(&lst1, new, print_int_list);
	add_result("ft_lstadd_back with lst = 1 -> 2 -> 3 and new = 4",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_int);
	// test 8
	print_testcase("-- Testing with lst = 1 -> 2 -> 3 -> 4 and new = 5");
	int1 = malloc(sizeof(int));
	int2 = malloc(sizeof(int));
	int3 = malloc(sizeof(int));
	int4 = malloc(sizeof(int));
	int5 = malloc(sizeof(int));
	*int1 = 1;
	*int2 = 2;
	*int3 = 3;
	*int4 = 4;
	*int5 = 5;
	lst1 = ft_lstnew(int1);
	lst2 = ft_lstnew(int2);
	lst3 = ft_lstnew(int3);
	lst4 = ft_lstnew(int4);
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	new = ft_lstnew(int5);
	result = test_ft_lstadd_back(&lst1, new, print_int_list);
	add_result("ft_lstadd_back with lst = 1 -> 2 -> 3 -> 4 and new = 5",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_int);
	/* ft_lstadd_back test end */
}
