# Libft

Small reimplementation of common C standard library functions used for 42 school projects.  
Provides mandatory functions (string, memory, conversion, I/O helpers) and optional linked-list utilities.

## Contents
- Implementations of standard helpers: ft_memset, ft_bzero, ft_calloc, ft_itoa, ft_strlen, ft_strlcpy, ft_strjoin, ...
- Bonus linked-list functions: ft_lstnew, ft_lstadd_back, ft_lstadd_front, ft_lstsize, ft_lstclear, ft_lstdelone, ft_lstiter, ft_lstmap
- A Makefile to build a static library `libft.a`.

## Requirements
- GCC - CC.
- make.
- Valgrind for memory leaks.

## Build
From the project root (Windows PowerShell / cmd / WSL):
- Build library:
  - make
- Build bonus objects into archive:
  - make bonus
- Clean object files:
  - make clean
- Full clean:
  - make fclean
- Rebuild:
  - make re

## Notes
- Functions operate on raw bytes; prefer `unsigned char` when doing byte-wise memory operations.
- Special cases are handled where necessary (e.g., INT_MIN in ft_itoa).
- Add small focused tests for each function to isolate leaks and UB.
