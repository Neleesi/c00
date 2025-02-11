#include <unistd.h>

void ft_print_numbers(void);

int main (void)
{
	ft_print_numbers ();
	return (0);	
}

void ft_print_numbers(void){
	for (char n = '0'; n <= '9'; n++) {
		write (1, &n, 1);
	}
		
}