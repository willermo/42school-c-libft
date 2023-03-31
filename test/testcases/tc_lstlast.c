/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:58:45 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:34:10 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "../test.h"

void
tc_lstlast( t_testcase **passed,
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
	t_list		*expected_last;
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

	/* ft_lstlast test start */
	print_header(">> Testing ft_lstlast(t_list *lst) <<\n\n");
	// test 1
	print_testcase("-- Testing with lst = \"Hello\"");
	str1 = strdup("Hello");
	lst1 = ft_lstnew(str1);
	expected_last = lst1;
	result = test_ft_lstlast(lst1, expected_last, print_string_list);
	add_result("ft_lstlast with lst = \"Hello\"",
				result,	passed,	failed,	invalid, manual);
	free(str1);
	free(lst1);
	// test 2
	print_testcase("-- Testing with lst = \"Hello\" -> \"World\"");
	str1 = strdup("Hello");
	str2 = strdup("World");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	ft_lstadd_back(&lst1, lst2);
	expected_last = lst2;
	result = test_ft_lstlast(lst1, expected_last, print_string_list);
	add_result("ft_lstlast with lst = \"Hello\" -> \"World\"",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_string);
	// test 3
	print_testcase("-- Testing with lst = \"Hello\" -> \"World\" -> \"Pippo\"");
	str1 = strdup("Hello");
	str2 = strdup("World");
	str3 = strdup("Pippo");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	lst3 = ft_lstnew(str3);
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	expected_last = lst3;
	result = test_ft_lstlast(lst1, expected_last, print_string_list);
	add_result("ft_lstlast with lst = \"Hello\" -> \"World\" -> \"Pippo\"",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_string);
	// test 4
	print_testcase("-- Testing with lst = \"Hello\" -> \"World\" -> \"Pippo\" -> \"Pluto\"");
	str1 = strdup("Hello");
	str2 = strdup("World");
	str3 = strdup("Pippo");
	str4 = strdup("Pluto");
	lst1 = ft_lstnew(str1);
	lst2 = ft_lstnew(str2);
	lst3 = ft_lstnew(str3);
	lst4 = ft_lstnew(str4);
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	ft_lstadd_back(&lst1, lst4);
	expected_last = lst4;
	result = test_ft_lstlast(lst1, expected_last, print_string_list);
	add_result("ft_lstlast with lst = \"Hello\" -> \"World\" -> \"Pippo\" -> \"Pluto\"",
				result,	passed,	failed,	invalid, manual);
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
	lst3 = ft_lstnew(str3);
	lst4 = ft_lstnew(str4);
	lst5 = ft_lstnew(str5);
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	ft_lstadd_back(&lst1, lst4);
	ft_lstadd_back(&lst1, lst5);
	expected_last = lst5;
	result = test_ft_lstlast(lst1, expected_last, print_string_list);
	add_result("ft_lstlast with lst = \"Hello\" -> \"World\" -> \"Pippo\" -> \"Pluto\" -> \"Paperino\"",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_string);
	// test 6
	print_testcase("-- Testing with lst = 1");
	int1 = malloc(sizeof(int));
	*int1 = 1;
	lst1 = ft_lstnew(int1);
	expected_last = lst1;
	result = test_ft_lstlast(lst1, expected_last, print_int_list);
	add_result("ft_lstlast with lst = 1",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_int);
	// test 7
	print_testcase("-- Testing with lst = 1 -> 2");
	int1 = malloc(sizeof(int));
	int2 = malloc(sizeof(int));
	*int1 = 1;
	*int2 = 2;
	lst1 = ft_lstnew(int1);
	lst2 = ft_lstnew(int2);
	ft_lstadd_back(&lst1, lst2);
	expected_last = lst2;
	result = test_ft_lstlast(lst1, expected_last, print_int_list);
	add_result("ft_lstlast with lst = 1 -> 2",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_int);
	// test 8
	print_testcase("-- Testing with lst = 1 -> 2 -> 3");
	int1 = malloc(sizeof(int));
	int2 = malloc(sizeof(int));
	int3 = malloc(sizeof(int));
	*int1 = 1;
	*int2 = 2;
	*int3 = 3;
	lst1 = ft_lstnew(int1);
	lst2 = ft_lstnew(int2);
	lst3 = ft_lstnew(int3);
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	expected_last = lst3;
	result = test_ft_lstlast(lst1, expected_last, print_int_list);
	add_result("ft_lstlast with lst = 1 -> 2 -> 3",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_int);
	// test 9
	print_testcase("-- Testing with lst = 1 -> 2 -> 3 -> 4");
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
	lst4 = ft_lstnew(int4);
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	ft_lstadd_back(&lst1, lst4);
	expected_last = lst4;
	result = test_ft_lstlast(lst1, expected_last, print_int_list);
	add_result("ft_lstlast with lst = 1 -> 2 -> 3 -> 4",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_int);
	// test 10
	print_testcase("-- Testing with lst = 1 -> 2 -> 3 -> 4 -> 5");
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
	lst5 = ft_lstnew(int5);
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	ft_lstadd_back(&lst1, lst4);
	ft_lstadd_back(&lst1, lst5);
	expected_last = lst5;
	result = test_ft_lstlast(lst1, expected_last, print_int_list);
	add_result("ft_lstlast with lst = 1 -> 2 -> 3 -> 4 -> 5",
				result,	passed,	failed,	invalid, manual);
	ft_lstclear(&lst1, del_int);
	// test 11
	print_testcase("-- Testing with lst = NULL");
	lst1 = NULL;
	expected_last = NULL;
	result = test_ft_lstlast(lst1, expected_last, print_string_list);
	add_result("ft_lstlast with lst = NULL",
				result,	passed,	failed,	invalid, manual);
	/* ft_lstlast test end */
}
