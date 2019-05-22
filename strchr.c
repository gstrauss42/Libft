#include <stdio.h>

char *ft_strchr(char *s, int c)
{
	int i;
	i = 0;
	char cc, *r;
	cc = (char) c;
	while(s[i] != '\0')
	{
		if(s[i] == cc)
		{	
			r = &s[i];
			return(r);
		}
		i++;
	}
	if(cc == '\0')
	{	
		r = &s[i];
		return(r);
	}
	return(NULL);
}

int main()
{
	char s[12] = "Hello there";
	printf("%s", ft_strchr(s, 'l'));
	return(0);
}
