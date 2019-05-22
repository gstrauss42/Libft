#include <stdio.h>
#include <string.h>

char *ft_strrchr(char *s, int c)
{
	int i;
	i = 0;
	char cc, *r;
	cc = (char) c;
	while(s[i] != '\0')
		i++;
	while(i >= 0)
	{
		if(s[i] == cc)
		{
			*r = s[i];
			return(r);
		}
		i--;
	}
	return(NULL);
}

int main()
{
	char s[12] = " Hello there";
	printf("%s", ft_strrchr(s, 'e'));
	return(0);
}
