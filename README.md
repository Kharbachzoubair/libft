# libft

🌟 **libft**: A versatile C library packed with essential functions for memory management, string manipulation, and list handling. This project is part of the 1337 School curriculum and serves as a foundation for future C programming projects.

---

## 📖 Overview

The **libft** project is a personal implementation of the standard C library functions, as well as some additional utility functions. It aims to improve your understanding of low-level programming by writing these functions from scratch.

---

## 🚀 Features

- **Memory Management**:
  - `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_calloc`, and more.
- **String Manipulation**:
  - `ft_strlen`, `ft_strdup`, `ft_strjoin`, `ft_split`, `ft_substr`, and others.
- **Character Checks and Conversions**:
  - `ft_isalpha`, `ft_isdigit`, `ft_tolower`, `ft_toupper`, etc.
- **File Descriptors**:
  - `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd`.
- **Linked List Operations** (Bonus):
  - `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, and more.

---

## 🛠️ Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/Kharbachzoubair/libft.git
   cd libft
2. Compile the library:
   ```bash
   make
3. Include the libft.a file in your project:
   ```bash
   gcc -L. -lft your_program.c

---

## 📚 Usage

1. Include the libft.h header in your project:
   ```bash
   #include "libft.h"
2. Call the library functions in your code as needed. For example:
   ```bash
   char *str = ft_strdup("Hello, world!");
   printf("%s\n", str);
   free(str);

---

## 🏆 Bonus Features

The project also includes additional functionality for linked lists, enabling developers to create and manipulate custom linked data structures.

---

## 📂 Files and Structure

- Source Files: Located in the root directory, each file implements a specific function.
- Header File: libft.h contains all necessary function prototypes and macros.
- Makefile: Simplifies the compilation process.

---

## 🙋‍♂️ Author

- **Kharbach Zoubair**
- [GitHub: Kharbachzoubair](https://github.com/Kharbachzoubair)
