/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tc_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:38:08 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 12:34:10 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BONUS
#include "../test.h"

void
tc_lstnew(  t_testcase **passed,
			t_testcase **failed,
			t_testcase **invalid,
			t_testcase **manual)
{
	t_result	result;
	char        *str1;
	int			*int1;

	/* ft_lstnew test start */
	puts("");
	blue();
	puts(">> Testing ft_lstnew(void *content) <<\n");
	// test 1
	cyan();
	puts("-- Testing with content = \"0\"");
	reset();
	str1 = strdup("0");
	result = test_ft_lstnew(str1, print_string_list);
	add_result(	"ft_lstnew with content = \"0\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 2
	cyan();
	puts("-- Testing with content = \"1000\"");
	reset();
	str1 = strdup("1000");
	result = test_ft_lstnew(str1, print_string_list);
	add_result(	"ft_lstnew with content = \"1000\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 3
	cyan();
	puts("-- Testing with content = \"\"");
	reset();
	str1 = strdup("");
	result = test_ft_lstnew(str1, print_string_list);
	add_result(	"ft_lstnew with content = \"\"",
				result, passed, failed, invalid, manual);
	free(str1);
	// test 4
	cyan();
	puts("-- Testing with content = \"NULL\"");
	reset();
	result = test_ft_lstnew(NULL, print_string_list);
	add_result(	"ft_lstnew with content = \"NULL\"",
				result, passed, failed, invalid, manual);
	// test 5
	cyan();
	puts("-- Testing with content = 0");
	reset();
	int1 = malloc(sizeof(int));
	*int1 = 0;
	result = test_ft_lstnew(int1, print_int_list);
	add_result(	"ft_lstnew with content = 0",
				result, passed, failed, invalid, manual);
	free(int1);
	// test 6
	cyan();
	puts("-- Testing with content = 1000");
	reset();
	int1 = malloc(sizeof(int));
	*int1 = 1000;
	result = test_ft_lstnew(int1, print_int_list);
	add_result(	"ft_lstnew with content = 1000",
				result, passed, failed, invalid, manual);
	free(int1);
	/* ft_lstnew test end */
}
