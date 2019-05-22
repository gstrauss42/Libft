#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	i = 0;
	while(((s1[i] || s1[i]) != '\0') && i < n)
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
	char s1[12] = "Hello therea";
	char s2[12] = "Hello therez";
	int n;
	n = 10;
	printf("%d", ft_strncmp(s1, s2, n));
	return(0);
}
