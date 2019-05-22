#include <stdio.h>

int isascii(int c)
{
	if(c <= 127 && c >= 0)
		return(1);
	else	
		return(0);
}

int main()
{
	printf("%d", isascii('h'));
	return(0);
}
