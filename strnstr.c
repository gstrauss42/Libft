#include <stdio.h>
#include <string.h>

char *ft_strnstr(char *haystack, const char *needle, size_t len)
{
	int i, o, p;
	i = 0;
	o = 0;
	p = 0;
	while(haystack[i] != '\0' && i < len)
	{
		while(haystack[i] == needle[o])
		{
			if(o == 0)
				p = i;
			i++;
			o++;
			if(needle[o] == '\0')
				return(&haystack[p]);
		}
		i++;
		o = 0;
	}
	return(NULL);
}

int main()
{
	char hay[12] = "Hello there";
	char needle[12] = "ell";
	printf("%s", ft_strnstr(hay, needle, 5));
	return(0);
}

