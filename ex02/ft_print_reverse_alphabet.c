#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main (void)
{
	ft_print_reverse_alphabet ();
	return (0);	
}

void ft_print_reverse_alphabet(void){
	for (char c = 'z'; c >= 'a'; c--) {
		write (1, &c, 1);
	}
		
}