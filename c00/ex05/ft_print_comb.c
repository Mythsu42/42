#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void    ft_print_comb(void){
    int a;
    int b;
    int c;
   
    a = 0;
    while (a < 8 )
    {
        b = a + 1;
        while (b < 9)
        {
            c = b + 1 ;
            while (c <= 9)
            {
               ft_putchar(a + 48);
               ft_putchar(b + 48);
               ft_putchar(c + 48);
                    if (a < 7)
                    {
                        ft_putchar(44);
                        ft_putchar(32);
                    }
                c++;
            }
            b++;
        }
        a++;
    }
    
}

int main(void)
{
    ft_print_comb();
    return 0;
}
