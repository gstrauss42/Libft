#include <stdlib.h>

char * ft_strmap(char const *s, char (*f)(char))
{
	int i;
	i = 0;
	while(s[i] != '\0')
	{
		s[i] = f(s[i]);
		i++;
	}
	s = (char *) malloc( i * sizeof(char));
	return(s);
}
