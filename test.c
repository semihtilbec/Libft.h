#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	a[] = "abcdefgh";
	char	b[] = "abcdefgh";

	printf("baslangic     : %s\n", a);
	ft_memcpy(a + 2, a, 5);
	ft_memmove(b + 2, b, 5);
	printf("memcpy  (kaydirma, ust uste binen): %s\n", a);
	printf("memmove (kaydirma, ust uste binen): %s\n", b);
	return (0);
}
