<h1 align="center">
	42cursus' libft
</h1>

[![NPM](https://img.shields.io/npm/l/react)](https://github.com/nandajfa/libft_42/blob/main/LICENSE)


<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/appinha/42cursus-00-Libft?color=blueviolet" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/appinha/42cursus-00-Libft?color=blue" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/appinha/42cursus-00-Libft?color=blue" />

  ## 🗣️ About

> _This project allows you to re-write those functions, understand them, and learn to use them. This library will help you with all your future C projects._
  
  ### Functions from `<ctype.h>` library

- [x] [`ft_isascii`](https://github.com/nandajfa/libft_42/blob/master/ft_isascii.c)			- test for ASCII character.
- [x] [`ft_isalnum`](https://github.com/nandajfa/libft_42/blob/master/ft_isalnum.c)			- alphanumeric character test.
- [x] [`ft_isalpha`](https://github.com/nandajfa/libft_42/blob/master/ft_isalpha.c)			- alphabetic character test.
- [x] [`ft_isdigit`](https://github.com/nandajfa/libft_42/blob/master/ft_isdigit.c)			- decimal-digit character test.
- [x] [`ft_isprint`](https://github.com/nandajfa/libft_42/blob/master/ft_isprint.c)			- printing character test (space character inclusive).
- [x] [`ft_tolower`](https://github.com/nandajfa/libft_42/blob/master/ft_tolower.c)			- upper case to lower case letter conversion.
- [x] [`ft_toupper`](https://github.com/nandajfa/libft_42/blob/master/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

- [x] [`ft_atoi`](https://github.com/nandajfa/libft_42/blob/master/ft_atoi.c)		- convert ASCII string to integer.
- [x] [`ft_calloc`]()	- memory allocation.

### Functions from `<string.h>` library

- [x] [`ft_strlen`](https://github.com/nandajfa/libft_42/blob/master/ft_strlen.c)	- calculate the length of a string.
- [x] [`ft_memset`](https://github.com/nandajfa/libft_42/blob/master/ft_memset.c)	- fill memory with a constant byte.
- [x] [`ft_bzero`](https://github.com/nandajfa/libft_42/blob/master/ft_bzero.c)	- zero a byte string.
- [x] [`ft_memcpy`](https://github.com/nandajfa/libft_42/blob/master/ft_memcpy.c)	- copy memory area.
- [x] [`ft_memmove`](https://github.com/nandajfa/libft_42/blob/master/ft_memmove.c)	- copy memory area.
- [x] [`ft_strlcpy`](https://github.com/nandajfa/libft_42/blob/master/ft_strlcpy.c)	- copy string to a specific size.
- [x] [`ft_strlcat`](https://github.com/nandajfa/libft_42/blob/master/ft_strlcat.c)	- concatenate a string to a specific size.
- [x] [`ft_strchr`](https://github.com/nandajfa/libft_42/blob/master/ft_strchr.c)	- locate character in a string.
- [x] [`ft_strrchr`](https://github.com/nandajfa/libft_42/blob/master/ft_strrchr.c)	- locate character in a string.
- [x] [`ft_strncmp`](https://github.com/nandajfa/libft_42/blob/master/ft_strncmp.c)	- compare two strings.
- [x] [`ft_memchr`](https://github.com/nandajfa/libft_42/blob/master/ft_memchr.c)	- scan memory for a character.
- [x] [`ft_memcmp`](https://github.com/nandajfa/libft_42/blob/master/ft_memcmp.c)	- compare memory areas.
- [x] [`ft_strnstr`](https://github.com/nandajfa/libft_42/blob/master/ft_strnstr.c)	- locate a substring in a string.
- [x] [`ft_strdup`](https://github.com/nandajfa/libft_42/blob/master/ft_strdup.c)	- creates a duplicate for the string passed as a parameter.
  
## Non-standard functions
- [x] [`ft_substr`](https://github.com/nandajfa/libft_42/blob/master/ft_substr.c)	- returns a substring from a string.
- [x] [`ft_strjoin`](https://github.com/nandajfa/libft_42/blob/master/ft_strjoin.c)	- concatenates two strings.
- [x] [`ft_strtrim`](https://github.com/nandajfa/libft_42/blob/master/ft_strtrim.c)	- trims the beginning and end of a string with a specific set of chars.
- [ ] [`ft_split`](https://github.com/nandajfa/libft_42/blob/master/ft_split.c)	- splits a string using a char as parameter.
- [x] [`ft_itoa`](https://github.com/nandajfa/libft_42/blob/master/ft_itoa.c)	- converts a number into a string.
- [x] [`ft_strmapi`](https://github.com/nandajfa/libft_42/blob/master/ft_strmapi.c)	- applies a function to each character of a string.
- [x] [`ft_striteri`](https://github.com/nandajfa/libft_42/blob/master/ft_striteri.c)	- applies a function to each character of a string.
- [x] [`ft_putchar_fd`](https://github.com/nandajfa/libft_42/blob/master/ft_putchar_fd.c)	- output a char to a file descriptor.
- [x] [`ft_putstr_fd`](https://github.com/nandajfa/libft_42/blob/master/ft_putstr_fd.c)	- output a string to a file descriptor.
- [x] [`ft_putendl_fd`](https://github.com/nandajfa/libft_42/blob/master/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [x] [`ft_putnbr_fd`](https://github.com/nandajfa/libft_42/blob/master/ft_putnbr_fd.c)	- output a number to a file descriptor.

## Linked list functions

- [ ] [`ft_lstnew`]()	- creates a new list element.
- [ ] [`ft_lstadd_front`]()	- adds an element at the beginning of a list.
- [ ] [`ft_lstsize`]()	- counts the number of elements in a list.
- [ ] [`ft_lstlast`]()	- returns the last element of the list.
- [ ] [`ft_lstadd_back`]()	- adds an element at the end of a list.
- [ ] [`ft_lstclear`]()	- deletes and free list.
- [ ] [`ft_lstiter`]()	- applies a function to each element of a list.
- [ ] [`ft_lstmap`]()	- applies a function to each element of a list.

---

  ## :computer: Technologies

* [C](https://devdocs.io/)
* [Makefile](https://www.gnu.org/software/make/manual/make.html)
* [Shell](https://unixguide.readthedocs.io/en/latest/unixcheatsheet/)
* [gcc](https://terminaldeinformacao.com/2015/10/08/como-instalar-e-configurar-o-gcc-no-windows-mingw/)
  
  ## Autor

Jessica Fernanda Alves Marques

https://www.linkedin.com/in/jessica-fernanda-alves-marques-106651205/
