#include <unistd.h>

void	ft_putnbr(int n)
{
	int i;
	int w;
	i = 1;
	while(n / i > 0)
	{
		i = i * 10;
	}
	i = i / 10;
	while(i > 0)
	{
		w = n % i;
		w = w + 48; 
		write(1, &w, 1);
		i = i /10;
	}
	return;
}
