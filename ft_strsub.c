#include <stdlib.h>

char *	ft_strsub(char const *s, unsigned int start, size_t len)
{
	int i;
	char *ret;
	i = 0;
	ret =(char *) malloc (len * sizeof(char));
	while(i < len)
	{
		ret[i] = s[i];
		i++;
	}
	return(ret);
}
