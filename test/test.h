/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <doriani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:30:06 by doriani           #+#    #+#             */
/*   Updated: 2023/04/04 20:59:34 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# ifndef __APPLE__
# 	include <bsd/string.h>
# endif
# include "../libft.h"
# define DEFAULT_SIZE 30

typedef enum e_result
{
	invalid,
	pass,
	fail,
	manual_check
}	t_result;

typedef struct s_testcase
{
	char				*description;
	t_result			result;
	struct s_testcase	*next;
}	t_testcase;
// COLORS FUNCTIONS PROTOTYPES
void		black();
void		red();
void		green();
void		yellow();
void		blue();
void		purple();
void		cyan();
void		white();
void		reset();
// HELPER FUNCTIONS PROTOTYPES
void		add_result(	char *description,
						t_result result,
						t_testcase **passed,
						t_testcase **failed,
						t_testcase **invalid,
						t_testcase **manual);
void		print_results(	t_testcase *passed,
							t_testcase *failed,
							t_testcase *invalid,
							t_testcase *manual);
void		free_results(	t_testcase *passed,
							t_testcase *failed,
							t_testcase *invalid,
							t_testcase *manual);
void		print_header(char *header);
void		print_testcase(char *description);
# ifdef BONUS
void		print_string_list(t_list *list);
void		print_int_list(t_list *list);
int			cmp_string_list(t_list *list1, t_list *list2);
int			cmp_int_list(t_list *list1, t_list *list2);
void		free_list(t_list *list);
void		del_int(void *content);
void		del_string(void *content);
void 		content_to_uppercase(void *str);
void		content_increment(void *n);
void 		*get_uppercase(void *str);
void		*get_incremented(void *n);
# endif
// MANDATORY PART 1 TEST FUNCTIONS PROTOTYPES
t_result	test_ft_isalpha(int c);
t_result	test_ft_isdigit(int c);
t_result	test_ft_isalnum(int c);
t_result	test_ft_isascii(int c);
t_result	test_ft_isprint(int c);
t_result	test_ft_strlen(const char *s);
t_result	test_ft_memset(void *s, int c, size_t n, size_t ma_size);
t_result	test_ft_bzero(void *s, size_t n, size_t ma_size);
t_result	test_ft_memcpy(void *dest, const void *src, size_t n,
						size_t ma_size);
t_result	test_ft_memmove(void *dest, const void *src, size_t n,
						size_t ma_size, int off);

t_result	test_ft_strlcpy(char *dest, const char *src, size_t size,
						size_t ma_size);
t_result	test_ft_strlcat(char *dest, const char *src, size_t size,
						size_t ma_size);
t_result	test_ft_toupper(int c);
t_result	test_ft_tolower(int c);
t_result	test_ft_strchr(const char *s, int c);
t_result	test_ft_strrchr(const char *s, int c);
t_result	test_ft_strncmp(const char *s1, const char *s2, size_t n);
t_result	test_ft_memchr(const void *s, int c, size_t n, size_t ma_size);
t_result	test_ft_memcmp(const void *s1, const void *s2, size_t n,
						size_t ma_size);
t_result	test_ft_strnstr(const char *big, const char *little, size_t len);
t_result	test_ft_atoi(const char *nptr);
t_result	test_ft_calloc(size_t nmemb, size_t size);
t_result	test_ft_strdup(const char *s);
// MANDATORY PART 2 TEST FUNCTIONS PROTOTYPES
t_result	test_ft_substr(	char const *s, unsigned int start, size_t len,
							char *expected);
t_result	test_ft_strjoin(char const *s1, char const *s2);
t_result	test_ft_strtrim(char const *s1, char const *set, char *expected);
t_result	test_ft_split(char const *s, char c, char **expected);
t_result	test_ft_itoa(int n, char *expected);
t_result	test_ft_strmapi(char const *s, char *expected,
							char (*f)(unsigned int, char));
t_result	test_ft_striteri(	char *s, char *expected,
								void (*f)(unsigned int, char *));
t_result	test_ft_putchar_fd(char c, int fd);
t_result	test_ft_putstr_fd(char *s, int fd);
t_result	test_ft_putendl_fd(char *s, int fd);
t_result	test_ft_putnbr_fd(int n, int fd, char *expected);
// BONUS PART TEST FUNCTIONS PROTOTYPES
#ifdef BONUS
t_result	test_ft_lstnew(void *content, void (*print_list) (t_list *));
t_result	test_ft_lstadd_front(	t_list **lst, t_list *new,
									void (*print_list) (t_list *));
t_result	test_ft_lstsize(t_list *lst, size_t expected_size,
							void (*print_list) (t_list *));
t_result	test_ft_lstlast(t_list *lst, t_list *expected_last,
							void (*print_list) (t_list *));
t_result	test_ft_lstadd_back(t_list **lst, t_list *new,
								void (*print_list) (t_list *));
t_result	test_ft_lstdelone(	t_list *lst, void (*del) (void *),
								void (*print_list) (t_list *));
t_result	test_ft_lstclear(	t_list **lst, void (*del) (void *),
								void (*print_list) (t_list *));
t_result	test_ft_lstiter(t_list *lst, t_list *expected_list,
					int (*cmp_list) (t_list *, t_list *),
					void (*print_list) (t_list *),
					void (*f) (void *));
t_result	test_ft_lstmap(t_list *lst, t_list *expected_list,
						int (*cmp_list) (t_list *, t_list *),
						void (*print_list) (t_list *),
						void *(*f) (void *), void (*del) (void *));
#endif
// MANDATORY PART 1 TESTCASES FUNCTIONS PROTOTYPES
void    tc_isalpha(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_isdigit(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_isalnum(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_isascii(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_isprint(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_strlen(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_memset(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_bzero(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_memcpy(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_memmove(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_strlcpy(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_strlcat(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_toupper(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_tolower(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_strchr(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_strrchr(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_strncmp(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_memchr(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_memcmp(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_strnstr(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_atoi(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_calloc(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_strdup(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
// MANDATORY PART 2 TESTCASES FUNCTIONS PROTOTYPES
void    tc_substr(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_strjoin(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_strtrim(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_split(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_itoa(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_strmapi(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_striteri(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_putchar_fd(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_putstr_fd(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_putendl_fd(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_putnbr_fd(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
// BONUS PART TESTCASES FUNCTIONS PROTOTYPES
#ifdef BONUS
void    tc_lstnew(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_lstadd_front(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_lstsize(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_lstlast(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_lstadd_back(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_lstdelone(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_lstclear(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_lstiter(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
void    tc_lstmap(t_testcase **passed, t_testcase **failed,
				 t_testcase **invalid, t_testcase **manual);
#endif
#endif
