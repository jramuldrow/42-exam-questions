/* Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.

Examples:

$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$
*/

// The name of the variable argc stands for "argument count"; argc contains the number of arguments passed to the program. 
// The name of the variable argv stands for "argument vector". 
// A vector is a one-dimensional array, and argv is a one-dimensional array of strings.
// The integer, argc is the argument count. It is the number of arguments passed into the program from the command line, 
// including the name of the program. The array of character pointers is the listing of all the arguments. 
// argv[0] is the name of the program, or an empty string if the name is not available.

#include <unistd.h>

int  main(int argc, char **argv)
{
    if (argc <= 1)           // so if the argument count is less the one then have our program display a new line
      write(1, "\n", 1);
    if (argc > 1)           // now if its greater then one 
    { 
       while (*argv[argc -1])  // were ask to display the last argument it has, so were telling it to go to the last index
       {  
          write(1, argv[argc -1]++, 1); // now that were at the last index, were asking for the program to display that
       }
       write(1, "\n", 1);  // after that we display a new line
    }
    return (0);
}
