// Compute the amount of change a user ask
#include<stdio.h>
#include<cs50.h>
int main(void)

{
    // creation of the variables that will store the amount of change
    int fiveh = 500, twof = 250, two = 200, hund = 100, fifty = 50, five = 5, one = 1, amount = 0;

    do
    {
        // get an amount from a user an check the validity
        amount = get_int("How much change we owed you?: ");
    }
    while (amount < 0);

    // initialize a counter
    int counter = 0;

    //check if a coin of five hundred can be use
    while (amount >= fiveh)
    {
        // Increase the counter
        counter++;
        // reduce the amount by five hundred
        amount = amount - fiveh;
    }

    //check if a coin of two hundred can be use
    while (amount >= twof)
    {
        // Increase the counter
        counter++;
        // reduce the amount by two hundred fifty
        amount = amount - twof;
    }

    //check if a coin of two hundred can be use
    while (amount >= two)
    {
        // Increase the counter
        counter++;
        // reduce the amount by two hundred
        amount = amount - two;
    }

    //check if a coin of a hundred can be use
    while (amount >= hund)
    {
        // Increase the counter
        counter++;
        // reduce the amount by a hundred
        amount = amount - hund;
    }

    //check if a coin of fifty can be use
    while (amount >= fifty)
    {
        // Increase the counter
        counter++;
        // reduce the amount by fifty
        amount = amount - fifty;
    }

    //check if a coin of five can be use
    while (amount >= five)
    {
        // Increase the counter
        counter++;
        // reduce the amount by five
        amount = amount - five;
    }

    //check if a coin of one can be use
    while (amount >= one)
    {
        // Increase the counter
        counter++;
        // reduce the amount by one
        amount = amount - one;
    }
    // print the number of coins that have been use
    printf("%i\n", counter);
}