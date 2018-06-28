#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc>2 || argc<2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }

    string cipher = argv[1];
    for(int i=0; i<strlen(cipher); i++)
    {
        if(! isalpha(cipher[i]))
        {
            printf("Usage: ./vigenere k\n");
            return 1;
        }
    }

    string s;
    s = get_string("plaintext: "); //plain text

    int a = 97, A = 65;

    //string cipher = argv[1];
    int cip =0;


    for(int i=0; i<strlen(s); i++) //cipher
    {
        int k = (int) s[i];
        if(k>96 && k<123)
        {
            k -= a;
            int l = (int) cipher[cip];
            if(l>96 && l<123)
            {
                l -= a;
            }
            else if(l>64 && l<91)
            {
                l -= A;
            }
            cip++;
            if(!(cip < strlen(cipher)))
            {
                cip = 0;
            }
            k = (k+l)%26;
            k += a;
        }
        else if(k>64 && k<91)
        {
            k -= A;
            int l = (int) cipher[cip];
            if(l>96 && l<123)
            {
                l -= a;
            }
            else if(l>64 && l<91)
            {
                l -= A;
            }
            cip++;
            if(!(cip < strlen(cipher)))
            {
                cip = 0;
            }
            k = (k+l)%26;
            k += A;
        }
        s[i] = (char) k;
    }

    printf("ciphertext: %s\n", s);
}