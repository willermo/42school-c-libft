/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:42:48 by doriani           #+#    #+#             */
/*   Updated: 2023/03/31 13:28:24 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

// COLORS
void	black()		{ printf("\033[1;30m"); }
void	red()		{ printf("\033[1;31m"); }
void	green()		{ printf("\033[1;32m"); }
void	yellow() 	{ printf("\033[1;33m"); }
void	blue()		{ printf("\033[1;34m"); }
void	purple()	{ printf("\033[1;35m"); }
void	cyan()		{ printf("\033[1;36m"); }
void	white()		{ printf("\033[1;37m"); }
void	reset () 	{ printf("\033[0m"); }

void	add_result(	char *description,
						t_result result,
						t_testcase **passed,
						t_testcase **failed,
						t_testcase **invalid,
						t_testcase **manual)
{
	if (result == pass)
	{
		green();
		puts("PASS");
		reset();
		(*passed)->description = strdup(description);
		(*passed)->result = result;
		(*passed)->next = (t_testcase *) malloc(sizeof(t_testcase));
		(*passed) = (*passed)->next;
		(*passed)->next = NULL;
	}
	else if (result == fail)
	{
		red();
		puts("FAIL");
		reset();
		(*failed)->description = strdup(description);
		(*failed)->result = result;
		(*failed)->next = (t_testcase *) malloc(sizeof(t_testcase));
		(*failed) = (*failed)->next;
		(*failed)->next = NULL;
	}
	else if (result == manual_check)
	{
		cyan();
		puts("MANUAL");
		reset();
		(*manual)->description = strdup(description);
		(*manual)->result = result;
		(*manual)->next = (t_testcase *) malloc(sizeof(t_testcase));
		(*manual) = (*manual)->next;
		(*manual)->next = NULL;
	}
	else
	{
		yellow();
		puts("INVALID");
		reset();
		(*invalid)->description = strdup(description);
		(*invalid)->result = result;
		(*invalid)->next = (t_testcase *) malloc(sizeof(t_testcase));
		(*invalid) = (*invalid)->next;
		(*invalid)->next = NULL;
	}
}

void print_results(t_testcase *passed,
					t_testcase *failed,
					t_testcase *invalid,
					t_testcase *manual)
{
	puts("\n");
	blue();
	puts("\t\t######################");
	puts("\t\t### RESULT SUMMARY ###");
	puts("\t\t######################");
	puts("");
	green();
	puts("PASSED TESTS");
	reset();
	if (passed->next == NULL)
	{
		puts("No test passed");
	}
	while (passed->next != NULL)
	{
		printf("Test case: %s\n", passed->description);
		passed = passed->next;
	}
	puts("");
	red();
	puts("FAILED TESTS");
	reset();
	if (failed->next == NULL)
	{
		puts("No test failed");
	}
	while (failed->next != NULL)
	{
		printf("Test case: %s\n", failed->description);
		failed = failed->next;
	}
	puts("");
	yellow();
	puts("INVALID TESTS");
	reset();
	if (invalid->next == NULL)
	{
		puts("No test invalid");
	}
	while (invalid->next != NULL)
	{
		printf("Test case: %s\n", invalid->description);
		invalid = invalid->next;
	}
	puts("");
	cyan();
	puts("MANUAL CHECK NEEDED");
	reset();
	if (manual->next == NULL)
	{
		puts("No test needs manual check");
	}
	while (manual->next != NULL)
	{
		printf("Test case: %s\n", manual->description);
		manual = manual->next;
	}
}
void 	free_results(t_testcase *passed,
					t_testcase *failed,
					t_testcase *invalid,
					t_testcase *manual)
{
	t_testcase *tmp;

	while (passed->next != NULL)
	{
		tmp = passed;
		passed = passed->next;
		free(tmp->description);
		free(tmp);
	}
	while (failed->next != NULL)
	{
		tmp = failed;
		failed = failed->next;
		free(tmp->description);
		free(tmp);
	}
	while (invalid->next != NULL)
	{
		tmp = invalid;
		invalid = invalid->next;
		free(tmp->description);
		free(tmp);
	}
	while (manual->next != NULL)
	{
		tmp = manual;
		manual = manual->next;
		free(tmp->description);
		free(tmp);
	}
}
void	print_header(char *header)
{
	puts("");
	blue();
	printf("%s\n", header);
	reset();
}
void	print_testcase(char *description)
{
	cyan();
	printf("%s\n", description);
	reset();
}
#ifdef BONUS
void	print_string_list(t_list *list)
{
	while (list != NULL)
	{
		if(list->content != NULL)
		{
			printf("%s", (char *)list->content);
		}
		else
		{
			printf("NULL");
		}
		if (list->next != NULL)
			printf(" -> ");
		list = list->next;
	}
	puts("");
}
void	print_int_list(t_list *list)
{
	while (list != NULL)
	{
		if (list->content != NULL)
		{
			printf("%d", *(int *)list->content);
		}
		else
		{
			printf("NULL");
		}
		if (list->next != NULL)
			printf(" -> ");
		list = list->next;
	}
	puts("");
}
int		cmp_string_list(t_list *list1, t_list *list2)
{
	while (list1 != NULL && list2 != NULL)
	{
		if (strcmp((char *)list1->content, (char *)list2->content) != 0)
			return (0);
		list1 = list1->next;
		list2 = list2->next;
	}
	if (list1 != NULL || list2 != NULL)
		return (0);
	return (1);
}
int		cmp_int_list(t_list *list1, t_list *list2)
{
	while (list1 != NULL && list2 != NULL)
	{
		if (*(int *)list1->content != *(int *)list2->content)
			return (0);
		list1 = list1->next;
		list2 = list2->next;
	}
	if (list1 != NULL || list2 != NULL)
		return (0);
	return (1);
}
void	free_list(t_list *list)
{
	t_list *tmp;

	while (list != NULL)
	{
		tmp = list;
		list = list->next;
		free(tmp->content);
		free(tmp);
	}
}
void	del_int(void *content)
{
	free((int *)content);
}

void	del_string(void *content)
{
	free((char *)content);
}
void content_to_uppercase(void *str)
{
	char *s;

	s = (char *)str;
	while (*s)
	{
		*s = toupper(*s);
		s++;
	}
}
void content_increment(void *n)
{
	int *i;

	i = (int *)n;
	*i += 1;
}
void	*get_uppercase(void *str)
{
	char	*s;
	char	*new;
	char	*runner;

	s = (char *)str;
	new = strdup(s);
	runner = new;
	while (*runner)
	{
		*runner = toupper(*runner);
		runner++;
	}
	return (new);
}
void	*get_incremented(void *n)
{
	int *i;
	int *new;

	i = (int *)n;
	new = malloc(sizeof(int));
	*new = *i + 1;
	return (new);
}
#endif
void	run_mandatory_testcases(t_testcase **passed,
            					t_testcase **failed,
            					t_testcase **invalid,
            					t_testcase **manual)
{
	tc_isalpha(passed, failed, invalid, manual);
	tc_isdigit(passed, failed, invalid, manual);
	tc_isalnum(passed, failed, invalid, manual);
	tc_isascii(passed, failed, invalid, manual);
	tc_isprint(passed, failed, invalid, manual);
	tc_strlen(passed, failed, invalid, manual);
	tc_memset(passed, failed, invalid, manual);
	tc_bzero(passed, failed, invalid, manual);
	tc_memcpy(passed, failed, invalid, manual);
	tc_memmove(passed, failed, invalid, manual);
	tc_strlcpy(passed, failed, invalid, manual);
	tc_strlcat(passed, failed, invalid, manual);
	tc_toupper(passed, failed, invalid, manual);
	tc_tolower(passed, failed, invalid, manual);
	tc_strchr(passed, failed, invalid, manual);
	tc_strrchr(passed, failed, invalid, manual);
	tc_strncmp(passed, failed, invalid, manual);
	tc_memchr(passed, failed, invalid, manual);
	tc_memcmp(passed, failed, invalid, manual);
	tc_strnstr(passed, failed, invalid, manual);
	tc_atoi(passed, failed, invalid, manual);
	tc_calloc(passed, failed, invalid, manual);
	tc_strdup(passed, failed, invalid, manual);
	tc_substr(passed, failed, invalid, manual);
	tc_strjoin(passed, failed, invalid, manual);
	tc_strtrim(passed, failed, invalid, manual);
	tc_split(passed, failed, invalid, manual);
	tc_itoa(passed, failed, invalid, manual);
	tc_strmapi(passed, failed, invalid, manual);
	tc_striteri(passed, failed, invalid, manual);
	tc_putchar_fd(passed, failed, invalid, manual);
	tc_putstr_fd(passed, failed, invalid, manual);
	tc_putendl_fd(passed, failed, invalid, manual);
	tc_putnbr_fd(passed, failed, invalid, manual);
}
#ifdef BONUS
void	run_bonus_testcases(t_testcase **passed,
            				t_testcase **failed,
            				t_testcase **invalid,
            				t_testcase **manual)
{
	tc_lstnew(passed, failed, invalid, manual);
	tc_lstadd_front(passed, failed, invalid, manual);
	tc_lstsize(passed, failed, invalid, manual);
	tc_lstlast(passed, failed, invalid, manual);
	tc_lstadd_back(passed, failed, invalid, manual);
	tc_lstdelone(passed, failed, invalid, manual);
	tc_lstclear(passed, failed, invalid, manual);
	tc_lstiter(passed, failed, invalid, manual);
	tc_lstmap(passed, failed, invalid, manual);
}
void	print_usage(void)
{
	puts("Usage: ./test_libft [mandatory] [bonus] [full]");
	puts("mandatory: mandatory");
	puts("bonus: bonus part");
	puts("full: all parts");
}
#endif
/* MAIN */
int main(int argc, char **argv)
{
	t_testcase	*passed = (t_testcase *) malloc(sizeof(t_testcase));
	t_testcase	*failed = (t_testcase *) malloc(sizeof(t_testcase));
	t_testcase	*invalid = (t_testcase *) malloc(sizeof(t_testcase));
	t_testcase	*manual = (t_testcase *) malloc(sizeof(t_testcase));
	passed->next = NULL;
	failed->next = NULL;
	invalid->next = NULL;
	manual->next = NULL;
	t_testcase *passed_head = passed;
	t_testcase *failed_head = failed;
	t_testcase *invalid_head = invalid;
	t_testcase *manual_head = manual;

	int	mandatory;
#ifdef BONUS
	int	bonus = 0;

	if(argc == 1)
	{
		print_usage();
		return (0);
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			if (strcmp(argv[i], "mandatory") == 0)
				mandatory = 1;
			else if (strcmp(argv[i], "bonus") == 0)
				bonus = 1;
			else if (strcmp(argv[i], "full") == 0)
			{
				mandatory = 1;
				bonus = 1;
			}
		}
		if (mandatory == 0 && bonus == 0)
		{
			print_usage();
			return (0);
		}
	}
#else
	mandatory = 1;
	(void) argc;
	(void) argv;
#endif


	blue();
	puts("\t\t\t##############################");
	puts("\t\t\t## TESTING libft ASSIGNMENT ##");
	puts("\t\t\t##############################");
	reset();

	if (mandatory)
	{
		print_header("## Running mandatory part 1 testcases  ##");
		run_mandatory_testcases (&passed, &failed, &invalid, &manual);
	}
#ifdef BONUS
	if (bonus)
	{
		print_header("## Running bonus testcases  ##");
		run_bonus_testcases (&passed, &failed, &invalid, &manual);
	}
#endif
	print_results(passed_head, failed_head, invalid_head, manual_head);
	free_results(passed_head, failed_head, invalid_head, manual_head);
	return (0);
}
