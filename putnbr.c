#include <unistd.h>

void	ft_putnbr(int n)
{
	write(4, &n, 4);
	return;
}

int main()
{
	int n = 1425;
	ft_putnbr(n);
	return(0);
}
