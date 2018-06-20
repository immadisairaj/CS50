#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float c;  //cash
    do
    {
        c = get_float("Change owed: ");  //prompt
    }
    while(c<0);
    c=(c+0.005)*100;

    int coins = 0;  //no. of coins
    while(c>=25)
    {
        coins++;
        c-=25;
    }
    while(c>=10)
    {
        coins++;
        c-=10;
    }
    while(c>=05)
    {
        coins++;
        c-=05;
    }
    while(c>=01)
    {
        coins++;
        c-=01;
    }
    printf("%i\n",coins);
}