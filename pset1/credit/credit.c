#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main (void) {
    long long int cardnumber;


//get valid Cardnumber
    do {
        cardnumber = get_long_long("Enter your Credid Card Number: ");
    }while (cardnumber < 1000000000000 || cardnumber > 9999999999999999);

//get every second digit
long long int seconddigits = cardnumber;
seconddigits /= 10;

    int seconddigitmultiplied = 0;

    while(seconddigits)
    {
        int multiplyseconddigit = (seconddigits % 10) *2;
        while (multiplyseconddigit)
        {
        seconddigitmultiplied += multiplyseconddigit % 10;
        multiplyseconddigit /= 10;
        }
        seconddigits /= 100;
    }

   // printf("%i", seconddigitmultiplied);

    long long int firstdigits = cardnumber;
    int firstdigitnumber = 0;

     while(firstdigits)
    {
       firstdigitnumber = firstdigits %10 + firstdigitnumber; //The same as: firstdigitnumber += firstdigits %10;
       firstdigits /=100;
    }

    int proofnumber = firstdigitnumber + seconddigitmultiplied;
   //Test Proofnumber printf("%i", proofnumber);

//check which credid card provider
      char cardLenS [50]; 
    snprintf(cardLenS, 50, "%lli", cardnumber); //turn int to string (char)
    int cardLen = strlen(cardLenS); //returns lenght of char
    
//check of valid at all
    if (proofnumber %10 == 0){ //last digit must be 0
        long long int firsttwodigits = 0;
        
        if (cardLen % 2==0){ //when even
            while (cardnumber){
                firsttwodigits = cardnumber %100;
                cardnumber /= 100;
            }
        }else{
            cardnumber /=10;
            while (cardnumber){
                firsttwodigits = cardnumber %100;
                cardnumber /= 100;
        }
    }

    if(firsttwodigits == 34 || firsttwodigits == 37){
           printf("AMEX\n");
       } else if(firsttwodigits > 50 && firsttwodigits < 56){
           printf("MasterCard\n");
       } else if(firsttwodigits / 10 == 4){
           printf("Visa\n");
       } else {
           printf("INVALID\n");
       }


   } else {
       printf("INVALID\n");
   }

}