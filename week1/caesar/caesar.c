#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc>2 || argc<2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    string s;
    s = get_string("plaintext: "); //plain text

    int a = 96, A = 64;

    int cipher = atoi(argv[1]);  //letters to move
    if(cipher < 0)
    {
        cipher *= -1;
        cipher %= 26;
        cipher = 26 - cipher;
    }
    else
    {
        cipher %= 26;
    }

    for(int i=0; i<strlen(s); i++) //cipher
    {
        int k = (int) s[i];
        if(k>96 && k<123)
        {
            k -= a;
            k = (k+cipher)%26;
            k += a;
        }
        else if(k>64 && k<91)
        {
            k -= A;
            k = (k+cipher)%26;
            k += A;
        }
        s[i] = (char) k;
    }

    printf("ciphertext: %s\n", s);
}