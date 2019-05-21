#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_bzero(char *s, size_t n)
{
	int i;

	i = 0;
	while(i < n)
	{
		s[i] = '0';
		i++;
	}
	return(s);	
}

int main()
{
	char s[12] = "Hello There";
	printf("%s \n", s);
	printf("%s", ft_bzero(s, 8));
	return(0);
}
