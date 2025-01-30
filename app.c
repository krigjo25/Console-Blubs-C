// Simulates light blocks

//  Importing responsories
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

//  Initialize Prototypes
void print_bulb(int bit);
void DecimalToBinary(int n);

int main(void)
{
    //  Prompting the user for input
    string prompt = get_string("Convert your sentence :");

    //  Iterate over the prompted word
    for (int i = 0; i < strlen(prompt); i++)
    {
        DecimalToBinary(prompt[i]);
        printf("\n");
    }
    return 0;
}

//  Converting Binary
void DecimalToBinary(int n)
{
    if (n > 0)
    {
        DecimalToBinary(n / 2);
    }
    return print_bulb(n % 10);
}

//  Prints out the results
void print_bulb(int bit)
{

    if (bit == 0)
    {
        printf("\U000026AB"); // Dark emoji
    }
    else if (bit == 1)
    {
        // missing a zero
        printf("\U0001F7E1"); // Light emoji
    }
}
