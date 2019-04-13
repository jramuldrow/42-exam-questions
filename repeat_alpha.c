/* Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/
 #include <unistd.h>
 
  int     realpha(char c)
  {
      int repeat;
 
      if (c >= 'A' && c <= 'Z') // so here we are accounting for Uppercase
          repeat = c - 'A' + 1;
      else if (c >= 'a' && c <= 'z') // and the same for the lower case
          repeat = c - 'a' + 1;
      else
          repeat = 1;  // if the character we encounter does not between the lower and upper case alphbeta then just only
                       // repeat it once.
      return (repeat);
  }
 
  int     main(int argc, char **argv)
  {
      int repeat;
 
      if (argc >= 2) // this is because we are asked to take in more the one arguement for this assigment
      {
          while (*argv[1])
          {
              repeat = realpha(*argv[1]);
              while (repeat--)
                  write(1, argv[1], 1);
              argv[1]++;
          }
      }
      write(1, "\n", 1);
      return (0);
  }
