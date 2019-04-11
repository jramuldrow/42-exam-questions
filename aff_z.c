/* Write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no
'z' characters in the string, the program writes 'z' followed
by a newline. If the number of parameters is not 1, the program displays
'z' followed by a newline.
Example:
$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
z$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$
*/

// Now this is a bit of a trick to this answer, most answers I've seen on this have been

#include <unistd.h>

int		main(void)
{
	write(1, "z", 1);
	write(1, "\n", 1);
	return (0);
}
// The above code works but its not taking in arguements and findig the first z it encounters its just displaying z

// This code below I see alot and it works for most of the test but...

#include <unistd.h>

  int     main(int argc, char **argv)
  {
      int i;
 
      i = 0;
      if (argc < 2)
          write(1, "z\n", 2);
      else
      {
          while (argv[1][i])
          {
              if (argv[1][i] == 'z')
              {
                  write(1, argv[1]++, 1);
                  break ;
              }
              i += 1;
          }
          write(1, "\n", 1);
      }
      return (0);
  }
  // It does not pass one part of the test if there is not z in the string
  
  // Now you can add this code below but it will have a segumation fault
  
  #include <unistd.h>

  int     main(int argc, char **argv)
  {
      int i;
 
      i = 0;
      if (argc < 2)
          write(1, "z\n", 2);
      else
      {
          while (argv[1][i])
          {
              if (argv[1][i] == 'z')
              {
                  write(1, argv[1]++, 1);
                  break ;
              }
              i += 1;
          }
          write(1, "\n", 1);
      }
      else
        if (argv[1][i] != 'z')
            write(1, "z\n", 1);
      return (0);
  }
  // Good luck in this program and try your best, figure out the code and move forward.
