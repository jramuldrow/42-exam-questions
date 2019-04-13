/*Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.
Example:
$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
*/

#include <unistd.h>

int   main(int argc, char **argv)
{ 
  int i;
  
  i = 0;
  if (argc != 2) // if the argument is not 2 then will display "a" in the output.
    write(1, "a", 1);
  else
  {
    while(argv[1][i]) // while were at the index of the first argument
    { 
        if(argv[1][i] == 'a') // if the index id equal to "a" 
        {
          write(1, "a", 1); // then write "a" to the standard output
          break ; // will break out of the loop once we encounter the first "a"
        }
        i += 1; // this will work until we enouter "a" or until we have gone though the whole string.
    }
  }
  write(1, "\n", 1);
  return (0);
}  
