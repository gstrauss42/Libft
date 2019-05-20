#include <stdio.h>

char *ft_strstr(char *a, char *b)
{
	int i, o, q;

	i = 0;
	o = 0;
	if(a[0] == '\0')
		return(b);
	while(b[o] != '\0')
	{
		while (a[i] == b[o])
		{
			if(i == 0)
				q = o;
			i++;
			o++;
			if (a[i] == '\0')
				return(&b[q]);
		}
		o++;
		i = 0;
	}
	return(NULL);
}

int main()
{
	char a[12] = "hello there";
	char b[6] = "llo";	
	printf("%s", ft_strstr(b, a));
}
