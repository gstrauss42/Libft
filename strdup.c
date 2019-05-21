#include <stdio.h>
#include <stdlib.h>

char *strdup(const char *str)
{
	char *a;
	int i;
	i = 0;
	while(str[i] != '\0')
		i++;
	a = (char *)malloc(i * sizeof (char));
	i = 0;
	while(str[i] != '\0')
	{
		a[i] = str[i];
		i++;
	}
	return(a);
}

int main()
{
	char s1[6] = "hello";
	printf("%s", strdup(s1));
	return(0);
}
