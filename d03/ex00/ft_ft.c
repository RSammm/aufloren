#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int nbr;

	ft_ft(&nbr);
	ft_putchar('\n');
	return (0);
}
