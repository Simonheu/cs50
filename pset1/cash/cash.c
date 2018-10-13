  #include <cs50.h>
  #include <stdio.h>
  #include <math.h>




    /*How much change is beeing owed?
    requirements:
    use get_float for input
    input format: 9.92 full digits: 9 or 9.00
    no negative inputs
    repromt if wrong input
    */


    /*put out the minimum number of coins with which this change can be given
    change from dollar to cents dollar*100 and round it
    use loops
    always use largest coin first
    keep track of coins used
    use printf to output answer
    last line number followed by \n

    */



int main(void){

    float input;


    do {
     input=get_float("How much is your change?: ");
    } while(input < 0);
    printf("%f", input);



    int userchange = (int) input *100;

    int coincount = 0;

    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;


    //how many quaters fit in userchange?
    while(userchange >=quarter) {
      coincount = coincount+1;
      userchange = userchange-quarter;
    }

    printf("%i", coincount);






}


