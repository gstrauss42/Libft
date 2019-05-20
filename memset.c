#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memset(unsigned char *b, int c, size_t len)
{
	int i;
	unsigned char *ab;
	i = 0;
	printf("%s\n", b);
	b = (unsigned char *)malloc(25 * sizeof(char));
	while(i < len)
	{
		b[i] = c;
		i++;
	}
	return(b);
}

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    memset(str, '.', 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}
