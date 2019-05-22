#include <stdio.h>

int isprint(int c)
{
	if(c >= 32 && c <= 126)
		return(1);
	else
		return(0);
}

int main()
{
	printf("%d", isprint('*'));
	return(0);
}
