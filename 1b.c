/**
 * @file 1b.c
 * @author Michel Lundell
 * Fixed very important stuff
 * Did this and that.
 * Another fix
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char data[255]; /* this is allocated on the heap */

char *ptr = NULL; /* this is also allocated to the heap */


int main(int argc, char **argv)
{
    int a = 5;  /* this is allocated on the stack */
    int b = 33; /* this is allocated on the stack */
    int c = 0;  /* this is allocated on the stack */

    printf("ptr address is: %p\n",&ptr);
    printf("main address is: %p\n", main);
    printf("data address is: %p\n", data);
    printf("ptr address is: %p\n",&ptr);
    printf("a address is: %p\n",&a);
    printf("b address is: %p\n",&b);
    printf("c address is: %p\n",&c);

    ptr = malloc(25); /* 25 chars allocated on the heap */
    strcpy(ptr,"Eet mege kontajder au rensa idau?");

    printf("%s\n",ptr);
    printf("ptr address is: %p\n",&ptr);
    printf("ptr points to: %p\n",ptr);
    printf("ptr (as a string): %s\n",ptr);

    free(ptr); /* memory is released ... warning is needed here */

    printf("ptr points to free'd memory! %s\n",ptr);

    printf("bye bye\n");

    return(0);
}
