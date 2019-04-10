/* Write a function that displays all digits in ascending order.

Your function must be declared as follows:

void	ft_print_numbers(void);
*/


#include <unistd.h>

void  ft_print_numbers(void)
{
    int num;
    
    num = '0';
    while(num <= '9')
    {
      write(1, &num, 1);
      num++;
    }
}
