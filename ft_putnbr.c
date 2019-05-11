#include "libft.h"

void	ft_putnbr(int n)
{
	int mag;

	if (n > 0)
		n = n * -1;
	else if (n == 0)
		ft_putchar('0');
	else
		ft_putchar('-');
	mag = -1000000000;
	while (mag < n)
		mag /= 10;
	while (n < 0 && mag < 0)
	{
		ft_putchar(n / mag + '0');
		n = (n % (mag * -1));
		mag /= 10;
	}
}
