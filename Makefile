# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doriani <doriani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 13:53:08 by doriani           #+#    #+#              #
#    Updated: 2023/04/04 20:51:34 by doriani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###############
## Variables ##
###############
NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
BONUS_ADDED = .bonus_functions_added
SRC_DIR		= ./
SRC_MAND    = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c      \
			  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c  \
			  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c  ft_strnstr.c  \
			  ft_atoi.c  ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c      \
			  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c     \
			  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC_BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c          \
			  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c       \
			  ft_lstmap.c
OBJ_FILES	= $(SRC_MAND:.c=.o)
OBJ_BONUS	= $(SRC_BONUS:.c=.o)
SRCS		= $(addprefix $(SRC_DIR), $(SRC_MAND))
SRCS_BONUS	= $(addprefix $(SRC_DIR), $(SRC_BONUS))     
OBJS		= $(addprefix $(SRC_DIR), $(OBJ_FILES))
OBJS_BONUS	= $(addprefix $(SRC_DIR), $(OBJ_BONUS))

#############
## Targets ##
#############
all: $(SRCS) $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%o: %c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS): $(SRCS)

$(OBJS_BONUS): $(SRCS_BONUS)

$(BONUS_ADDED): $(NAME) $(SRCS_BONUS) $(OBJS_BONUS)
	ar -rs $(NAME) $(OBJS_BONUS)
	touch .bonus_functions_added

bonus: $(BONUS_ADDED)

clean: clean_bonus
	rm -f $(OBJS)

clean_bonus:
	rm -f $(OBJS_BONUS) $(BONUS_ADDED)

fclean: clean
	rm -f $(NAME) $(BONUS_ADDED)

re: fclean all

##########################
## Test section targets ##
##########################
TEST_DIR	= ./test/
TC_DIR		= ./test/testcases/
SRC_T_MAIN	= test.c
SRC_T_MAND	= test_ft_isalpha.c test_ft_isdigit.c test_ft_isalnum.c           \
			  test_ft_isascii.c test_ft_isprint.c test_ft_strlen.c            \
			  test_ft_memset.c test_ft_bzero.c test_ft_memcpy.c               \
			  test_ft_memmove.c  test_ft_strlcpy.c test_ft_strlcat.c          \
			  test_ft_toupper.c test_ft_tolower.c test_ft_strchr.c            \
			  test_ft_strrchr.c test_ft_strncmp.c test_ft_memchr.c            \
			  test_ft_memcmp.c  test_ft_strnstr.c test_ft_atoi.c              \
			  test_ft_calloc.c test_ft_strdup.c test_ft_substr.c              \
			  test_ft_strjoin.c test_ft_strtrim.c test_ft_split.c             \
			  test_ft_itoa.c test_ft_strmapi.c test_ft_striteri.c             \
			  test_ft_putchar_fd.c test_ft_putstr_fd.c test_ft_putendl_fd.c   \
			  test_ft_putnbr_fd.c
SRC_TC_MAND	= tc_isalpha.c tc_isdigit.c tc_isalnum.c tc_isascii.c tc_isprint.c \
		      tc_strlen.c tc_memset.c tc_bzero.c tc_memcpy.c tc_memmove.c      \
			  tc_strlcpy.c tc_strlcat.c tc_toupper.c tc_tolower.c tc_strchr.c  \
			  tc_strrchr.c tc_strncmp.c tc_memchr.c  tc_memcmp.c  tc_strnstr.c \
			  tc_atoi.c tc_calloc.c tc_strdup.c tc_substr.c tc_strjoin.c       \
			  tc_strtrim.c tc_split.c tc_itoa.c tc_strmapi.c tc_striteri.c     \
			  tc_putchar_fd.c tc_putstr_fd.c tc_putendl_fd.c tc_putnbr_fd.c
SRC_T_BONUS	= test_ft_lstnew.c test_ft_lstadd_front.c test_ft_lstsize.c        \
			  test_ft_lstlast.c test_ft_lstadd_back.c test_ft_lstdelone.c      \
			  test_ft_lstclear.c test_ft_lstiter.c test_ft_lstmap.c
SRC_TC_BONUS= tc_lstnew.c tc_lstadd_front.c tc_lstsize.c tc_lstlast.c          \
			  tc_lstadd_back.c tc_lstdelone.c tc_lstclear.c tc_lstiter.c       \
			  tc_lstmap.c
OBJ_MAIN_FILE= $(SRC_T_MAIN:.c=.o)
OBJT_FILES	= $(SRC_T_MAND:.c=.o)
OBJT_B_FILES = $(SRC_T_BONUS:.c=.o) 
OBJTC_FILES	= $(SRC_TC_MAND:.c=.o)
OBJTC_B_FILES= $(SRC_TC_BONUS:.c=.o)
T_MAIN		= $(addprefix $(TEST_DIR), $(SRC_T_MAIN))
T_MAND		= $(addprefix $(TEST_DIR), $(SRC_T_MAND))
TC_MAND		= $(addprefix $(TC_DIR), $(SRC_TC_MAND))
T_BONUS		= $(addprefix $(TEST_DIR), $(SRC_T_BONUS))
TC_BONUS	= $(addprefix $(TC_DIR), $(SRC_TC_BONUS))
OBJ_MAIN_S  = $(addprefix $(TEST_DIR), $(OBJ_MAIN_FILE))
OBJTS		= $(addprefix $(TEST_DIR), $(OBJT_FILES))
OBJTCS		= $(addprefix $(TC_DIR), $(OBJTC_FILES))
OBJTS_BONUS = $(addprefix $(TEST_DIR), $(OBJT_B_FILES))
OBJTCS_BONUS= $(addprefix $(TC_DIR), $(OBJTC_B_FILES))
TEST		= libft_test
TESTBONUS   = libft_test_with_bonus
PLATFORM := $(shell uname)
BSD			=
ifneq ($(PLATFORM),Darwin)
	BSD += -lbsd
endif

$(OBJ_MAIN_S): $(T_MAIN)

$(OBJTS): $(T_MAND)

$(OBJTCS): $(TC_MAND)

$(OBJTS_BONUS): $(T_BONUS)

$(OBJTCS_BONUS): $(TC_BONUS)

.PHONY: test testbonus testclean ftestclean

testclean:
	rm -f $(OBJ_MAIN_S) $(OBJTS) $(OBJTCS) $(OBJTS_BONUS) $(OBJTCS_BONUS)

ftestclean: testclean
	rm -f $(TEST) $(TESTBONUS)

$(TEST): $(NAME) $(OBJ_MAIN_S) $(OBJTS) $(OBJTCS)
	$(CC) $(CFLAGS) $(OBJ_MAIN_S) $(OBJTS) $(OBJTCS) $(NAME) -o $(TEST) $(BSD)

test: $(NAME) $(TEST)

$(TESTBONUS): $(NAME) $(OBJTS) $(OBJTCS) $(OBJTS_BONUS) $(OBJTCS_BONUS) upgradetest
	$(CC) $(CFLAGS) -DBONUS $(OBJ_MAIN_S) $(OBJTS) $(OBJTCS) $(OBJTS_BONUS) $(OBJTCS_BONUS) $(NAME) -o $(TESTBONUS) $(BSD)

upgradetest:
	rm -f $(OBJ_MAIN_FILE)
	$(CC) $(CFLAGS) -DBONUS -c $(T_MAIN) -o $(OBJ_MAIN_S)

testbonus: bonus $(OBJTS) $(OBJTCS) $(OBJTS_BONUS) $(OBJTCS_BONUS) $(TESTBONUS) 

wipe: fclean ftestclean

rebuild: wipe test

rebuildbonus: wipe testbonus

tidy: rebuild
	rm -f *.o
	rm -f test/*.o
	rm -f test/testcases/*.o
	rm -f $(NAME)

tidybonus: rebuildbonus
	rm -f *.o
	rm -f test/*.o
	rm -f test/testcases/*.o
	rm -f $(NAME)

usage:
	@echo "Usage: make [usage | all | bonus | clean | fclean | re | test | \
	testbonus | testclean | ftestclean | wipe | rebuild | rebuildbonus | \
	tidy | tidybonus]"
	@echo
	@echo "-- Usage --"
	@echo "\tusage: displays this message"
	@echo
	@echo "-- Library build targets --"
	@echo "\tall: compile the library"
	@echo "\tbonus: adds bonus functions tolibrary"
	@echo "\tclean: remove object files"
	@echo "\tfclean: remove object files and library"
	@echo "\tre: fclean and all"
	@echo
	@echo "-- Test section targets --"
	@echo "\ttest: compile the library and the test program"
	@echo "\ttestbonus: compile the library and the test program with bonus"
	@echo "\ttestclean: remove test object files"
	@echo "\tftestclean: testclean and remove test program"
	@echo "\twipe: ftestclean and fclean"
	@echo "\trebuild: wipe and test"
	@echo "\trebuildbonus: wipe and testbonus"
	@echo "\ttidy: rebuild and remove object files"
	@echo "\ttidybonus: rebuildbonus and remove object files"
	