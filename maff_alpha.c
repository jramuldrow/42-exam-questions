/* Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
caBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

// I will show you two diiferent codes to answer this question. 
// One is looked upon as lazy and the other is not.
// play around with the ascii table to get the idea about all the alphabeta questions that are in this exam.
// 42 students.

The First Code:

#include <unistd.h>

void  ft_putchar(char c)
{
    write(1, &c, 1);
}

int   main(void)
{
  char a;
  char b;
  
  a = 'a';
  b = 'B';
  while (a <= 'z' && b <= 'Z')
  { 
    ft_putchar(a);
    ft_putchar(b);
    a += 2;
    b += 2;
  }
  ft_putchar('\n');
  return (0);
}  


The Second code: which is frown upon but still works

#include <unistd.h>

int   main(void)
{
    write(1,"aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
    return (0);
}
