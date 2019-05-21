#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memset(char *b, int c, size_t len)
{
	int i;
	i = 0;
	while(i < len)
	{
		b[i] = c;
		i++;
	}
	return(b);
}

int main()
{
    char str[12] = "Hello there";
    printf("%s", ft_memset(str, '.', 4 * sizeof(char)));
    return 0;
}
