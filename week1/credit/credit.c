#include <cs50.h>
#include <stdio.h>

int sumOfDigits(int n)
{
    return (n/10)+(n%10);
}

int main(void)
{
    long long c;
    do
    {
        c = get_long_long("Number: "); //account number
    }
    while(c<0);

    long long x=c;
    long long a=0;
    int cou=0;

    while(x!=0)
    {
        a*=10;
        a+=(x%10);
        x/=10;
        cou++;
    }
    int sw = ((a%10)*10)+(a/10)%10;

    int s=0, k;
    while(c!=0)
    {
        k=c%100;
        s+=k%10;
        k/=10;
        s+=sumOfDigits(2*k);
        c/=100;
    }
    if(s%10 == 0 && cou>=13 && cou<=16)
    {
        switch(sw)
        {
            case 34:
            case 37:
                printf("AMEX\n");
                break;
            case 51 ... 55 :
                printf("MASTERCARD\n");
                break;
            case 40 ... 49:
                printf("VISA\n");
                break;
            default:
                printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}