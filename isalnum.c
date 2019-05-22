#include <stdio.h>

int ft_isalnum(int c)
{
	if((c > 64 && c < 91) || (c > 96 && c < 123))
		return(1);
	else if((c < 10 && c >= 0) || (c < 58 && c > 47))
		return(1);
	else 
		return(0);
}

int main()
{
	printf("%d", ft_isalnum('q'));
	return(0);
}
