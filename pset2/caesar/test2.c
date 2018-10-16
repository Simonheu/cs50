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
    string p = get_string ("Enter Text Phrase you want to enrcypt Only Capital Letters ;): ");

    //test print delete when done
    printf ("%s\n", p);

    for (int i = 0, n = strlen(p); i < n; i++)
    {
        printf("Letters with Asci original Asci Value: %c %i \n", p[i], (int) p[i] );
    }
    printf("\n");

    int cypherlatteralpha = 0;

    //Convert from Ascii Value to Alphabetical Value and add key
    for (int i = 0, n = strlen(p); i < n; i++)
    {
    cypherlatteralpha = (((int) p[i] - 65)+key) %26;
    printf("Cyphervalue in Alphabetical Value: %i\n", cypherlatteralpha);

    //reconvert from Alphaletter to Ascii value
    int cypherlatterasci = cypherlatteralpha +65;
    printf("Cyphervalue in Asci Value: %i\n",cypherlatterasci);
    }


}
