# Libft - Library of functions in C

![42BCN - Deordone](https://github.com/Droied4/Libft/assets/69441843/a824ed3f-e896-47f1-9b1c-b1f7b36a9ff1)

## Description
Libft is an individual project in 42 that makes us recreate standard C library functions for future projects and have a deeper understanding about basic data structures and algorithms.

## Instructions

### 1. Compiling the archives

To compile the proiect, go to its path and run:

For __mandatory__ functions:
```
$ make
```
### 2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:
```
$ make fclean
```

### 3. Using it in your code

To use this project in your code, simply include this header:
```
#include "libft.h"
```

# Functions

### Functions from `<ctype.h>`

- [`ft_isalpha`](ft_isalpha.c)	- checks  for  an  alphabetic  character.
- [`ft_isdigit`](ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](ft_isalnum.c)	- checks for an alphanumeric character.
- [`ft_isascii`](ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [`ft_isprint`](ft_isprint.c)	- checks for any printable character.
- [`ft_toupper`](ft_toupper.c)	- convert char to uppercase.
- [`ft_tolower`](ft_tolower.c)	- convert char to lowercase.

### Functions from `<string.h>`

- [`ft_memset`](ft_memset.c)	- fill memory with a constant byte.
- [`ft_strlen`](ft_strlen.c)	- calculate the length of a string.
- [`ft_bzero`](ft_bzero.c)	- zero a byte string.
- [`ft_memcpy`](ft_memcpy.c)	- copy memory area.
- [`ft_memmove`](ft_memmove.c)	- copy memory area.
- [`ft_strlcpy`](ft_strlcpy.c)	- copy string to an specific size.
- [`ft_strlcat`](ft_strlcat.c)	- concatenate string to an specific size.
- [`ft_strchr`](ft_strchr.c)	- locate character in string.
- [`ft_strrchr`](ft_strrchr.c)	- locate character in string.
- [`ft_strncmp`](ft_strncmp.c)	- compare two strings.
- [`ft_memchr`](ft_memchr.c)	- scan memory for a character.
- [`ft_memcmp`](ft_memcmp.c)	- compare memory areas.
- [`ft_strnstr`](ft_strnstr.c)	- locate a substring in a string.
- [`ft_strdup`](ft_strdup.c)	- creates a dupplicate for the string passed as parameter.

### Functions from `<stdlib.h>`
- [`ft_atoi`](ft_atoi.c)	- convert a string to an integer.
- [`ft_calloc`](ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

### Non-standard functions
- [`ft_substr`](ft_substr.c)	- returns a substring from a string.
- [`ft_strjoin`](ft_strjoin.c)	- concatenates two strings.
- [`ft_strtrim`](/ft_strtrim.c)	- trims the beginning and end of string with specific set of chars.
- [`ft_split`](/ft_split.c)	- splits a string using a char as parameter.
- [`ft_itoa`](ft_itoa.c)	- converts a number into a string.
- [`ft_strmapi`](ft_strmapi.c)	- applies a function to each character of a string.
- [`ft_striteri`](ft_striteri.c)	- applies a function to each character of a string.
- [`ft_putchar_fd`](ft_putchar_fd.c)	- output a char to a file descriptor.
- [`ft_putstr_fd`](ft_putstr_fd.c)	- output a string to a file descriptor.
- [`ft_putendl_fd`](ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	- output a number to a file descriptor.

### Linked list functions

- [`ft_lstnew`](ft_lstnew_bonus.c)	- creates a new list element.
- [`ft_lstadd_front`](ft_lstadd_front_bonus.c)	- adds an element at the beginning of a list.
- [`ft_lstsize`](ft_lstsize_bonus.c)	- counts the number of elements in a list.
- [`ft_lstlast`](ft_lstlast_bonus.c)	- returns the last element of the list.
- [`ft_lstadd_back`](ft_lstadd_back_bonus.c)	- adds an element at the end of a list.
- [`ft_lstclear`](ft_lstclear_bonus.c)	- deletes and free list.
- [`ft_lstiter`](ft_lstiter_bonus.c)	- applies a function to each element of a list.
- [`ft_lstmap`](ft_lstmap_bonus.c)	- applies a function to each element of a list.

## Info +

### About me

### ➡️ [Linkedin Profile](https://www.linkedin.com/in/droied/) ⬅️
![LinkedIn](https://img.shields.io/badge/linkedin-%230077B5.svg?style=for-the-badge&logo=linkedin&logoColor=white)
### ➡️ [Intra Profile](https://profile.intra.42.fr/users/deordone) ⬅️
[![deordone 42 stats](https://badge.mediaplus.ma/honeytones/deordone)](https://github.com/oakoudad/badge42)
### ⬇️ [_Developed in_](nothing) ⬇️
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white) 
### ⬇️ [_Version Control_](nothing) ⬇️
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)
### ⬇️ [_Status_](nothing) ⬇️
[![archive](https://github.com/GIScience/badges/raw/master/status/archive.svg)](https://github.com/GIScience/badges#archive)
