#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h; //height
    do
    {
        h = get_int("Height: ");  //prompt
    }
    while(h<0 || h>23);

    for(int i=0; i<h; i++)
    {
        for(int j=0; j<h-i-1; j++)
            printf(" ");
        for(int j=0; j<i+2; j++)
            printf("#");
        printf("\n");
    }
}