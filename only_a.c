/* Write a program that displays a 'a' character on the standard output. */

// so inside the 42 universe your ask to not use printf
// which is use/industry standard but heres the alternative they want



#include <unistd.h>

int   main(void) // void because we are not taking in any arguments
{
    write(1, "a", 1); // displaying one charcter to the standard output which is a, which only needs 1byte in space
    return (0);
}

// using the write system call 
https://en.wikipedia.org/wiki/Write_(system_call)
