#include <stdio.h> 
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1


int main(void)
{
    int cents, q, d, n, p;
    printf("Enter an amount of cents: \n");
    scanf("%d", &cents);    
    printf("\n");

    for(q = 0; cents >= QUARTER; q++)
    {   
        cents = cents - QUARTER;
    }
    for(d = 0; cents >= DIME; d++)
    {
        cents = cents - DIME;
    }
    for(n = 0; cents >= NICKEL; n++)
    {
        cents = cents - NICKEL;
    } 
    for(p = 0; cents >= PENNY; p++)
    {
        cents = cents - PENNY;
    }
    
    printf("Quarters: %d\nDimes: %d\nNickels: %d\nPennies: %d\n",q,d,n,p);
}
