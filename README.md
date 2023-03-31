# 42school-c-libft

## 1. Purpose

The purpose of this testsuite is to check the validy of the libft 42 School project.

## 2. Validity

This test suit complies with Libft project version 15.

## 3. Disclaimer

This software is released **as is**, this means that it may contain untracked bugs, errors or any other kind of annoyances.
Specifically, passing the tests **DOES NOT GUARANTEE** that moulinette/deepthought would be equally happy making its own tests.
Discrepancies between the results of this test suite and moulinette (should they occur) could be due to weak/incomplete testcases, not-so-robust test functions, or whatever.
The structure of this test suite allows you to add more testcases accordingly.

**Feedbacks, comments, suggestions and pull requests for the overall improvement of this suite are warmly welcomed.**

## 4. Dependencies

For testing purposes of standard C library functions emulation, consider that some of them included in this projects are emulation of BSD extension functions (eminently `strllcpy`, `strnstr` and `strlcat`).
This test suite takes this in consideration and compilation behavior is suited to comply both for **MacOS** and **Linux**.
In case you use a Linux machine, you should obtain and install the `libbsd-dev` package beforehand (for Ubuntu: `sudo apt-get install -y libbsd-dev`).

This suite has not been tested on Microsoft operating systems (and will probabliy not be in the future).

## 5. Structure

The folder structure must be followed strictly.

- All functions to be tested must reside in the root of repository.
- All the test functions must reside in the `./test` folder.
- All the testcase functions must reside in the `./test/testcase` folder.

## 6. Usage

Usage and compilation are done via make and Makefile.
Make targets follow:

```
Usage: make [usage | all | bonus | clean | fclean | re | test | testbonus | testclean | ftestclean | wipe | rebuild | rebuildbonus | tidy | tidybonus]

-- Usage --
        usage: displays this message

-- Library build targets --
        all: compile the library
        bonus: adds bonus functions tolibrary
        clean: remove object files
        fclean: remove object files and library
        re: fclean and all

-- Test section targets --
        test: compile the library and the test program
        testbonus: compile the library and the test program with bonus
        testclean: remove test object files
        ftestclean: testclean and remove test program
        wipe: ftestclean and fclean
        rebuild: wipe and test
        rebuildbonus: wipe and testbonus
        tidy: rebuild and remove object files
        tidybonus: rebuildbonus and remove object files
```

As you can see, you can build both a suite for mandatory functions, or a full suite for testing both mandatory and bonus functions.

The output programs are called `libft_test` and `libft_test_with_bonus` respectively.

## 7. Final considerations

Although the functions to be tested are included in this repository, **you are strongly encouraged to write your own ones**.
I decided to leave mines to allow you to work on the suite out of the box. You can keep the original functions and replace them while progressing the development of your own ones.
Please, for your own convenience, **be mindful**.

## 8. Contacts

You can contact me both here on github or via email (willermo AT gmail).
