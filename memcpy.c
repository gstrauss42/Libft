#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memcpy(void  *dst, const void *src, size_t n)
{
	int i;
	char *dest, *source;
	
	dest = (char *)dst;
	source= (char *)src;
	i = 0;
	while(i < n)
	{
		dest[i] = source[i];
		i++;
	}
	i = 0;
	while(dest[i] != '\0')
		i++;
	return(dest);
}

int main()
{
	char src[12] = "Hello There";
	char dst[12] = "abcdefghijk";
	printf("%s", ft_memcpy(dst, src, 4 * sizeof(char)));
	return(0);
}
