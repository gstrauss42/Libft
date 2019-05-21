#include <stdio.h>

int ft_isalpha(int c)
{
	if((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return(1);
	}
	else
		return(0);
}

int main()
{
	printf("%d",ft_isalpha(12));
	return(0);
}
