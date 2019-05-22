#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char *ss1, *ss2, a;
	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	i = 0;
	while(i <= n)
	{
		if(ss2[i] == ss1[i])
			i++;
		else
		{
			if(ss2[i] > ss1[i])
			{
				a = ss2[i] - ss1[i];
				return(a);
			}
			else
			{
				a = ss1[i] - ss2[i];
				return(a);
			}
		}
	}
	return(0);
}

int main()
{
	char s1[12] = "aello there";
	char s2[12] = "aello there";
	printf("%c", ft_memcmp(s1, s2, 10));
	return(0);
}
