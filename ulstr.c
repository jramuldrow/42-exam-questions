/* Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.

Examples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$
*/

// looking at the Ascii Table will help you understand why we add and subtract 32
 #include <unistd.h>
 
  int     main(int argc, char *argv[])
  {
      int i;
      char letter;
 
      i = 0;
      if (argc == 2) // with pacific instructions are agruments should only be 2
      {
          while (argv[1][i]) // using a wild loop we will loop though the index of the 1st argument.
          {
               letter = argv[1][i];
              if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') // accounting for uppercase will add 32 
                  letter += 32;
              if (argv[1][i] >= 'a' && argv[1][i] <= 'z') // accounting for lowercase will minus 32
                  letter -= 32;
              write(1, &letter, 1); // this will write one charcater at a time to the output
              i += 1; // this is loop through the whole index of the first argument
          }
      }
      write(1, "\n", 1);
      return (0);
  }
