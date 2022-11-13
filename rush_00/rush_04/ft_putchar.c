#include <unistd.h>

void	top_line(int x, int a)
{
	if (x == 0)
		write(1, "A", 1);
	else if (x == a - 1)
		write(1, "C", 1);
	else
		write(1, "B", 1);
}

void	bot_line(int x, int a)
{
	if (x == 0)
		write(1, "C", 1);
	else if (x == a - 1)
		write(1, "A", 1);
	else
		write(1, "B", 1);
}

void	other_lines(int x, int a)
{
	if (x == 0 || x == a - 1)
		write(1, "B", 1);
	else
		write(1, " ", 1);
}

void	ft_putchar(int x, int y, int a, int b)
{
	if (y == 0)
	{
		top_line(x, a);
	}
	else if (y == b - 1)
	{
		bot_line(x, a);
	}
	else
	{
		other_lines(x, a);
	}
}

