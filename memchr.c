#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	int i;
	char *ss;
	unsigned char cc;
	cc = (unsigned char)c;
	ss = (char *)s;
	i = 0;
	while(i < n)
	{
		if(ss[i] == cc)
			return(&ss[i]);
		i++;
	}
	return(NULL);
}

int main()
{
	char s[12] = "Hello there";
	printf("%s", memchr(s, 'o', 5 * sizeof(char)));
	return(0);
}
