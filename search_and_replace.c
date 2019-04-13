/* Write a program called search_and_replace that takes 3 arguments, the first 
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
*/

 #include <unistd.h>
 
  int     main(int argc, char **argv)
  {
      int i;
 
      if (argc !=4) // so this is 4 because we are ask to take no more then 3 arguments and we also need to remember that 
                   // we need to account for the program's name.
      {
          write(1, "\n", 1); // this will display a newline if the requrments are not meet.
          return (0);
      }
 
      if (argv[2][1] != '\0' || argv[3][1] != '\0') 
      {
          write(1, "\n", 1);
          return (0);
      }
 
      i = 0;
      while (argv[1][i] != '\0')
      {
          if (argv[1][i] == argv[2][0]) // this is stating that argv1 index is equal to argv 2 index
              argv[1][i] = argv[3][0];  // this assigns the argv1 index to argv 3 index
          write(1, &argv[1][i], 1);
          i++;
      }
      write(1, "\n", 1);
      return (0);
  }
