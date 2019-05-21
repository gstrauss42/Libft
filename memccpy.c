#include <string.h>
#include <stdio.h>

unsigned char *ft_memccpy(void *dst, const void *src, int c,size_t n)
{
	int i;
	unsigned char *a, *dest, *source, ab;
	ab = (unsigned char) c;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	while(i < n)
	{	
		if(source[i] == ab)
			return(&source[i+1]);
		dest[i] = source[i];
		i++;
	}
	while(source[i] != '\0')
		i++;
	return(&dest[i]);
}

int main()
{
	char src[12] = "Hello there";
	char dst[12] = "Hello there";
	char c;
	c = 'e';
	printf("%s", ft_memccpy(dst, src, c, 5 * sizeof(char)));
	return(0);
}
