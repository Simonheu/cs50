#include <stdio.h>
#include <cs50.h>

int main(void)

//checks the input value to be between 0 and 23 and prompts the user to put in value again, if not in this range
{
    int h;

    do {
        h=get_int("num: ");
    } while(h < 0 || h>23);
    printf("\n");


    //number of hashes to begin with.
      int m = 2;


    //While Loop takes care of the number of rows to be printed

    while (h>0)
        {

            //prints number of spaces decreasing by one woth each interation of the while loop
            for (int k=0; k<h-1; k++)
            {
                printf(" ");
            }


            //prints the hashes starting by two,
             for (int i = 0; i<m; i++)
                    {
                        printf("#");
                    }

        //increases by one with each interation of the while loop
        m++;

        //decreases h with each iteration of the while loop, untill h=0 is reached
        h=h-1;

        printf("\n");

    }

}






    /*
    n = height



    for (int i = 0; i < height; i++)
    {
        printf(" ")
        printf("##")
        print(/n)


    }*/