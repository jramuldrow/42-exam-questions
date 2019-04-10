/* Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.

Example:

$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_first_param
$
*/

// The name of the variable argc stands for "argument count"; argc contains the number of arguments passed to the program.
// Including the name of the program.
// The name of the variable argv stands for "argument vector". 
// A vector is a one-dimensional array, and argv is a one-dimensional array of strings.

#include <unistd.h>

//So we write out main function with the paramters argc and argv

int   main(int argc, char **argv)
{   
    //so if the program is less then 1(which means it only contains the program then have the program display a newline
    if (argc < 1)
        write(1, "\n", 1);
    // but if the program has any arguments besides its own name then have the program display just the first argument 
    // follwed by a newline
    if (argc > 1)
    { 
        while (*argv[1]) // while were at the first index of this array
        { 
            write(1, argv[1]++, 1); // write out the whole index of this array, only this index though
        }
        write(1, "\n", 1); // follwed by a new line
        return (0); 
    }
}    
here it is again without all the comments

#include <unistd.h>

int   main(int argc, char **argv)
{
    if (argc <= 1)
      write(1, "\n", 1);
    if (argc > 1)
    {
      while (argv[1])
      { 
        write(1, argv[1]++, 1);
      }
      write(1, "\n", 1);
    }
    return (0);
 }

