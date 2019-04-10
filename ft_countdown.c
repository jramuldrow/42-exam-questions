/* Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>
*/

#include <unistd.h>

int   main(void)
{
  int count;
  
  count = '9';
  while (count >= '0')
  {
      write(1, &count, 1);
      count--;
  }
  write(1, "\n", 1);
  return (0);
}
