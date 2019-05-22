#include <stdio.h>

int ft_isdigit(int c)
{
	char a;
	a = (char) c;
	if((a< 10 && a >= 0) || (a < 58 && a > 47) )
		return(1);
	else
		return(0);	
}

int main()
{
	printf("%d", ft_isdigit(9));
	return(0);
}
