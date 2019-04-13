Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions: 
--------------------------------------------------------------------------------

/* Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);

*/

#include <unistd.h>
#include <stdio.h>

// were including the stdio.h to use printf in the main function to check our code. 
// do not turn in your main function.

  #include <unistd.h>
  #include <stdio.h>
 
  int     ft_strlen(char *str)
  {
      int i;
                          
      i = 0;
      while(str[i] != '\0') // so while the str index is not equal to the string terminator
      {                   
          i++;
      }
      return(i);  // return the vaule of i
  }
 
  int     main(void)
  {
      char name[] = "green eggs and ham";
      printf("%d\n", ft_strlen(name));
      return (0);
  }
