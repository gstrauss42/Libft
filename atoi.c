#include <stdio.h>

int atoi(char *a)
{
	int i, b, ret;
	
	i = 0;
	while(a[i] != '\0')
	{
		b = a[i] - 48;
		if(i == 0)
			ret = b;
		else
			ret = b + ret *10;
		i++;
	}
	return(ret);
}

int main(int argc, char **argv)
{
	printf("%d", atoi(argv[1]));
	return(0);
}
