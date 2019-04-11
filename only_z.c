/* Write a program that displays a 'z' character on the standard output. */

//The exact smae as only_a if you look back in my posts

#include <unistd.h>

int   main(void)
{
    write(1, "z", 1);
    return (0);
}
