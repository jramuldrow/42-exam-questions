/* Write a program that displays "Hello World!" followed by a \n.

Example:

$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>
*/

#include <unistd.h>

int   main(void)
{
  write(1, "Hello World!\n", 13);
  return (0);
}
  
// its 13 because you need to account for the space inbetween the two words as well as all the charcters and newline  
