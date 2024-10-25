#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int	main(void)
{
	char a[] = "a";
	char *b = "1234";

	printf("%zu   ",ft_strlcat(a, b, 4));

	printf("%s   ", a);
	printf("%s   ", b);

}
