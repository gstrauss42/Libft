#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;
	i = 0;
	while(s1[i] == s2[i] && i < n)
	{
		if((s1[i] &&s2[i]) == '\0')
			return(1);
		i++;
	}
	return(0);
}
