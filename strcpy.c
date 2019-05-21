#include <stdio.h>

char *ft_strcpy(char *dst, const char * src)
{	
	int i, q;
	i = 0;
	q = 0;
	while(src[q] != '\0')
		q++;
	while(i <= q)
	{
		dst[i] = src[i];
		i++;
	}
	return(dst);
}

int main()
{
	char src[12] = "Hello ts";
	char dst[10] = "hello";
	printf("%s",ft_strcpy(dst, src));
	return(0);
}
