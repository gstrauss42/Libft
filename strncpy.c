#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dst, const char * src, size_t len)
{
	int i;
	int p;

	p = 0;
	i = 0;
	while(i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		p++;
	}
	while(src[p] == '\0' && i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return(dst);
}

int main()
{
	char dst[20] = "";
	char src[20] = "Hello there";
	int len = 21;
	printf("%s", ft_strncpy(dst, src, len));
	return(0);
}
