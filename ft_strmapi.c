#include <stdlib.h>

char *	ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	i = 0;
	while(s[i] != '\0')
	{
		s[i] = f(i, s[i]);
		i++;
	}
	s = (char *) malloc (i * sizeof(char));
	return(s);
}
