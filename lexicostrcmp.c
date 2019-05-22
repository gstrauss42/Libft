#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
	int i, ascii, s1c, s2c, t1, t2, tt , ans;
	i = 0;
	ascii = 0;
	while(ascii <= 127)
	{
		while((s1[i] || s2[i]) != '\0')
		{
			if(s1[i] == ascii)
			{
				t1 = s1[i];
				s1c++;
			}
			if(s2[i] == ascii)
			{
				t2 =s2[i];
				s2c++;
			}
			i++;
		}
		i = 0;
		if(s1c != s2c)
		{
			if(s1c > s2c)
			{
				while(tt == '\0')
				{
					ascii++;
					while(s2[i] != '\0')
					{	
						if(s2[i] == ascii)
							tt = s2[i];
						i++;
					}
				}
				ans = t1 - tt;
				return(ans);
			}
			if(s2c > s1c)
			{
			while(tt == '\0')
			{
				ascii++;
				while(s1[i] != '\0')
				{	
					if(s1[i] == ascii)
						tt = s1[i];
					i++;
				}
			}
			ans = t2 - tt;
			return(ans);
			}
		}
		ascii++;
	}
	return(0);
}

int main()
{
	char s1[12] = "abc";
	char s2[12] = "abc";
	printf("%d", ft_strcmp(s1, s2));
	return(0);
}
