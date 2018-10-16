#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>





int main(int argc, string argv[]){

   if (argc != 2)
    {
        printf("expected 1 argument, you passed %i. Exiting \n", argc);
        return 1;
    }

    //get key
    int key = atoi (argv[1]);
    printf ("%i\n", key);

    //get Plain text that will be encrypted
    string p = get_string ("Enter Text Phrase you want to enrcypt: ");
    printf ("%s\n", p);

    for (int i = 0, n = strlen(p); i < n; i++)
    {
    printf("%c %i \n", p[i], (int) p[i] );

    }

    printf("\n");

    if


    for (int i = 0, n = strlen(p); i < n; i++)
    {

    ifuppe

    printf ("%c %i\n", p[i] +2, (int) p[i]+2);
    }


}
