#include <stdio.h>

int tolower(int c)
{
	if(c > 64  && c < 91)
		c = c + 32;
	else 
		return(c);
	return(c);
}

int main()
{
	printf("%c", tolower(65));
	return(0);
}
