#include <unistd.h>

void ft_print_comb(void);

int main() {
	ft_print_comb();
	return 0;
}

void ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0';
	while (first <= '7') 
	{
		second = first + 1;
        while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				write(1, &first, 1);
				write(1, &second, 1);
				write(1, &third, 1);
				write(1, " ", 1);
				third++;
			}
			second++;
		}
		first++;
	}
}
