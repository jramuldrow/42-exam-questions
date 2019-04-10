/* Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
caBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

// I will show you two diiferent codes to answer this question. 
// One is looked upon as lazy and the other is not.

// a function in C can be declared with a return type of void . This means that the function doesn't return a value. 
// void can also be used to indicate to the compiler that the function does not take any arguments.

The First Code:

#include <unistd.h>

void  ft_putchar(char c)
{
    write(1, &c, 1);
}

int   main(void) // void because we are not taking any arguments
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
