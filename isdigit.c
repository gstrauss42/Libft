#include <stdio.h>

int ft_isdigit(int c)
{
	if(c > 47 && c < 58)
		return(1);
	else
		return(0);
}

int main()
{
	printf("%d", ft_isdigit(49));
	return(0);
}
