#include <stdio.h>
#include <string.h>

size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	int i, o;
	i = 0;
	while(dst[i] != '\0')
		i++;
	while(src[o] != '\0')
		o++;
	i = i + o - 1;
	return(i);
}

int main()
{
	char dst[12] = "Hello there";
	char src[12] = "Hello there";
	printf("%zu", ft_strlcat(dst, src, 11));
	return(0);
}
