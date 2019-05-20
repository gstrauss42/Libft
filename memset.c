#include <string.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *ab;
	unsigned char aa;
	aa =
	ab = (unsigned char *) b;	
	i = 0;
	while(i < len)
	{
		ab[i] = c;
		i++;
	}
	return(ab);
}

int main()
{
	void *b = "hello there";
	int c = 65;
	size_t len = 4;
	printf("%p", ft_memset(b, c, len));
	return(0);
}

