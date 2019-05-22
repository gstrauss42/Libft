#include <stdio.h>
#include <stdlib.h>

char *ft_strcat(char *s1, const char *s2)
{
	int i, p, a, c;
	char *ret;

	c = 0;
	i = 0;
	while(s1[i] != '\0')
		i++;
	while(s2[p] != '\0')
		p++;
	a = i + p + 1;
	ret = (char *)malloc(a *sizeof(char));
	while(ret[c] < i)
	{
	   ret[c] = s1[c];
	   c++;
	}
	i = 0;
	while(ret[c] <= a)
	{
		ret[c] = s2[i];
		i++;
		c++;
	}
	return(ret);
}

int main()
{
	char a[12] = "Hello there";
	char b[12] = "Hello";
	printf("%s", ft_strcat(a, b));
	return(0);
}
