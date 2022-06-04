#include <unistd.h>

void    ft_putchar(char str)
{
    write(1, &str, 1);
}

void    ft_print_comb2(void)
{
    int a;
    int b;
    int c; 
    int d;

    a = 0;
    c = 0;

    while (a <= 9 && b <9)
    {
        while(b < 9){
            while (d <= 9 && c < 9){
                while(c < 9){
                    ft_putchar(a + 48);
                    ft_putchar(b + 48);
                    ft_putchar(32);
                    ft_putchar(c + 48);
                    ft_putchar(c + 48);
                    if (a != 9 && b != 8)
                    {
                        ft_putchar(44);
                        ft_putchar(32);
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
    
}