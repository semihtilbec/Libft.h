#include "libft.h"
#include <stdio.h>

void	print_content(void *content)
{
	printf("%s ", (char *)content);
}

void	no_free(void *content)
{
	(void)content;
}

int	main(void)
{
	t_list	*lst;
	t_list	*node;

	printf("=== Part 1 - Libc functions ===\n");
	printf("ft_atoi(\"  -42\")   = %d\n", ft_atoi("  -42"));
	printf("ft_strlen(\"hello\") = %zu\n", ft_strlen("hello"));
	printf("ft_strchr(\"hello\", 'l')  = %s\n", ft_strchr("hello", 'l'));
	printf("ft_strrchr(\"hello\", 'l') = %s\n", ft_strrchr("hello", 'l'));
	printf("ft_isalnum('a') = %d\n", ft_isalnum('a'));

	printf("\n=== Part 2 - Additional functions ===\n");
	printf("ft_substr(\"hello world\", 6, 5) = %s\n",
		ft_substr("hello world", 6, 5));
	printf("ft_strjoin(\"foo\", \"bar\") = %s\n", ft_strjoin("foo", "bar"));
	printf("ft_itoa(-123) = %s\n", ft_itoa(-123));

	printf("\n=== Part 3 - Linked list ===\n");
	lst = ft_lstnew("a");
	ft_lstadd_back(&lst, ft_lstnew("b"));
	ft_lstadd_back(&lst, ft_lstnew("c"));
	printf("liste boyu (ft_lstsize) = %u\n", ft_lstsize(lst));
	printf("liste icerigi: ");
	ft_lstiter(lst, print_content);
	printf("\n");
	node = ft_lstlast(lst);
	printf("son eleman (ft_lstlast) = %s\n", (char *)node->content);
	ft_lstclear(&lst, no_free);
	printf("clear sonrasi lst == NULL ? %s\n", lst == NULL ? "evet" : "hayir");

	return (0);
}
