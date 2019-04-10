/* Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

// Here we are playing with the alphabet again

#include <unistd.h>

void  ft_putchar(char c) // In c a function can be declared with a return type of void.
// This means that the function doesn't return a value. 
// void can also be used to indicate to the compiler that the function does not take any arguments.
{
  write(1, &c, 1);  // to write one charcter at a time to the standard output.
}

int   main(void) // void because we are not taking any arguments.
{ 
    char  up;
    char  down; 
    
    down = 'z';
    up   = 'Y';
    
    while (down >= 'a' && up >= 'A') // while down and up are greater then lower case and upcase (a) excute this code
    {
        ft_putchar(down);  // using ft_putchar to display/output the character
        ft_putchar(up);    // same as above
        down -= 2;  // we minus 2 to skip a letter, outputting the next one in sucession
        up -= 2;   // same as down
    }
    ft_putchar('\n'); // we add a new line to the end of out output
    return (0);
 }
 
 #include <unistd.h>
 
 void   ft_putchar(char c)
 {
      write(1, &c, 1);
 }
 
 int    main(void)
 {
    char  up;
    char  down;
    
    down = 'z';
    up  = 'Y';
    while (down >= 'a' && up >= 'A')
    {
      ft_putchar(down);
      ft_putchar(up);
      down -= 2;
      up -= 2;
    }
    ft_putchar('\n');
    return (0);
 }
    
