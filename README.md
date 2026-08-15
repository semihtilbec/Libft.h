*This project has been created as part of the 42 curriculum by setilbec.*

## 📌 Description

**Libft** is the very first individual project in the **42 School** curriculum. The task is to re-code a set of standard C library functions (`libc`), along with additional utility functions for string manipulation, memory management, and list handling.

Since standard C libraries are forbidden in most subsequent 42 projects, **Libft** serves as a foundational library that will be reused and expanded throughout the entire 42 curriculum.

---

## 🛠️ Included Functions

### 1. Libc Functions
Standard C library functions re-implemented without external dependencies:

| Memory Functions | String Functions | Character Tests & Conversions |
| :--- | :--- | :--- |
| `ft_memset` | `ft_strlen` | `ft_isalpha` |
| `ft_bzero` | `ft_strlcpy` | `ft_isdigit` |
| `ft_memcpy` | `ft_strlcat` | `ft_isalnum` |
| `ft_memmove` | `ft_strchr` | `ft_isascii` |
| `ft_memchr` | `ft_strrchr` | `ft_isprint` |
| `ft_memcmp` | `ft_strncmp` | `ft_toupper` |
| `ft_calloc` | `ft_strnstr` / `ft_strdup` | `ft_tolower` / `ft_atoi` |

### 2. Additional Functions
Non-standard utility functions written to simplify common C operations:

* **`ft_substr`**: Extracts a substring from a string.
* **`ft_strjoin`**: Concatenates two strings with dynamic allocation.
* **`ft_strtrim`**: Trims specified leading and trailing characters from a string.
* **`ft_split`**: Splits a string into an array of strings using a delimiter.
* **`ft_itoa`**: Converts an integer to an ASCII string.
* **`ft_strmapi` / `ft_striteri`**: Applies a function to each character of a string.
* **`ft_putchar_fd` / `ft_putstr_fd` / `ft_putendl_fd` / `ft_putnbr_fd`**: Writes data to a given file descriptor.

### 3. Linked List Functions
Functions to create and manipulate a singly linked list (`t_list`):

* **`ft_lstnew`**: Creates a new list node.
* **`ft_lstadd_front`**: Adds a node at the beginning of the list.
* **`ft_lstadd_back`**: Adds a node at the end of the list.
* **`ft_lstsize`**: Counts the number of nodes in the list.
* **`ft_lstlast`**: Returns the last node of the list.
* **`ft_lstdelone`**: Frees a single node and its content.
* **`ft_lstclear`**: Frees an entire list and its content.
* **`ft_lstiter`**: Applies a function to each node's content.
* **`ft_lstmap`**: Applies a function to each node's content and returns a new list with the results.

## Resources

* `man` pages of the reimplemented functions (`man strlen`, `man memcpy`, `man calloc`, `man strrchr`, ...)
* [42 Norm](https://github.com/42School/norminette) — coding style reference

### AI usage

AI (Claude) was used during this project as a debugging and review aid, not to write the implementations.
