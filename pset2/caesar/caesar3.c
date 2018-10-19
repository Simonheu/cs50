#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int main (int argc, string argv[])
{
    if (argc == 2)
    {

    int k = atoi (argv[1]);
    string p = get_string("Enter Plaintext: ");

        for (int i=0, n=strlen(p);  i < n; i++)
        {

            if (isalpha(p[i]))
            {
                if (isupper(p[i]))
                {

                int a = (int)p[i] - 65;
                a = a +k;
                a = a % 26;
                a = a + 65;
                printf("%c", a);

                }else if (islower(p[i]))
                {
                int a = (int)p[i] - 97;
                a = a +k;
                a = a % 26;
                a = a + 97;
                printf("%c", a);
                }



            }else
            {
            printf("%c", p[i]);
            }


        }

        } else
        {
            printf("Please enter only two commandline arguments");
            return 1;
    }

    printf("\n");

}
