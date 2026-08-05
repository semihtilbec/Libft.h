# Libft - Your First C Library

## 📌 About the Project

**Libft** is the very first individual project in the **42 School** curriculum. The task is to re-code a set of standard C library functions (`libc`), along with additional utility functions for string manipulation, memory management, and list handling.

Since standard C libraries are forbidden in most subsequent 42 projects, **Libft** serves as a foundational library that will be reused and expanded throughout the entire 42 curriculum.

> **Note:** All code adheres strictly to **The Norm** (Norminette) coding standards required by 42 School.

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


make
