#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	char *dest, *source;
	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	while(i < len)
	{
		dest[i] = source[i];
		i++;
	}
	return(dest);
}

int main()
{
	char dst[6] = "hello";
	char src[12] = "hello there";
	printf("%s", ft_memmove(dst, src, 7 *sizeof(char)));
	return(0);
}
