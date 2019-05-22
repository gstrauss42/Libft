#include <stdio.h>

int toupper(int c)
{
	if(c > 96 && c < 123)
		c = c - 32;
	else
		return(c);
	return(c);
}

int main()
{
	printf("%c", toupper('1'));
	return(0);
}
