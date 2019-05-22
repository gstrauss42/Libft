#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
	int i;
	i = 0;
	while((s1[i] || s2[i]) != '\0')
	{
		if(s1[i] != s2[i])
		{
			i = s1[i] - s2[i];
			return(i);
		}
		i++;
	}
	return(0);
}

int main()
{
	char s1[12] = "Hello thzere";
	char s2[12] = "Helloz there";
	printf("%d", ft_strcmp(s1, s2));
	return(0);
}
