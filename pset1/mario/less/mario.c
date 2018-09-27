#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;

    do {
        h=get_int("num: ");
    } while(h < 0 || h>23);
    printf("\n");


  int m = 2;

//print spaces counting down

while (h>0)
    {
        for (int k=0; k<h-1; k++)
        {
            printf(" ");
        }

        //change this to the format of the for loop above


         for (int i = 0; i<m; i++)
                {
                    printf("#");
                }


        m++;
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