#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define _XOPEN_SOURCE
#include <unistd.h>
char *crypt(const char *key, const char *salt);

int main(int argc, string argv[])
{
    if(argc>2 || argc<2)
    {
        printf("Usage: ./crack hash\n");
        return 1;
    }

    string hash = argv[1];
    string map;
    char word[5];
    string salt = "50";

    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    //check a-Z
    for (int a = 0; a < 52; a++)
    {
        word[0] = alphabet[a];

        map = crypt(word, salt);

        if ( strcmp(map, hash) == 0 )
        {
            printf("%s\n", word);
return 0;
        }
    }

    //check aa-ZZ
    for (int a = 0; a < 52; a++)
    {
        word[0] = alphabet[a];

        map = crypt(word, salt);

        if ( strcmp(map, hash) == 0 )
        {
            printf("%s\n", word);
return 0;
        }

        for (int b = 0; b < 52; b++)
        {
            word[1] = alphabet[b];

            map = crypt(word, salt);

            if ( strcmp(map, hash) == 0 )
            {
                printf("%s\n", word);
return 0;
            }
        }
    }

    //check aaa-ZZZ
    for (int a = 0; a < 52; a++)
    {
        word[0] = alphabet[a];

        map = crypt(word, salt);

        if ( strcmp(map, hash) == 0 )
        {
            printf("%s\n", word);
return 0;
        }

        for (int b = 0; b < 52; b++)
        {
            word[1] = alphabet[b];

            map = crypt(word, salt);

            if ( strcmp(map, hash) == 0 )
            {
                printf("%s\n", word);
return 0;
            }

            for (int c = 0; c < 52; c++)
            {
                word[2] = alphabet[c];

                map =  crypt(word, salt);

                if ( strcmp(map, hash) == 0 )
                {
                    printf("%s\n", word);
return 0;
                }
            }
        }
    }

    //check aaaa-ZZZZ
    for (int a = 0; a < 52; a++)
    {
        word[0] = alphabet[a];

        map = crypt(word, salt);

        if ( strcmp(map, hash) == 0 )
        {
            printf("%s\n", word);
return 0;
        }

        for (int b = 0; b < 52; b++)
        {
            word[1] = alphabet[b];

            map = crypt(word, salt);

            if ( strcmp(map, hash) == 0 )
            {
                printf("%s\n", word);
return 0;
            }

            for (int c = 0; c < 52; c++)
            {
                word[2] = alphabet[c];

                map =  crypt(word, salt);

                if ( strcmp(map, hash) == 0 )
                {
                    printf("%s\n", word);
return 0;
                }

                for (int d = 0; d < 52; d++)
                {
                    word[3] = alphabet[d];

                    map =  crypt(word, salt);

                    if ( strcmp(map, hash) == 0 )
                    {
                        printf("%s\n", word);
return 0;
                    }
                }
            }
        }
    }

    //check aaaaa-ZZZZZ
    for (int a = 0; a < 52; a++)
    {
        word[0] = alphabet[a];

        map = crypt(word, salt);

        if ( strcmp(map, hash) == 0 )
        {
            printf("%s\n", word);
return 0;
        }

        for (int b = 0; b < 52; b++)
        {
            word[1] = alphabet[b];

            map = crypt(word, salt);

            if ( strcmp(map, hash) == 0 )
            {
                printf("%s\n", word);
return 0;
            }

            for (int c = 0; c < 52; c++)
            {
                word[2] = alphabet[c];

                map =  crypt(word, salt);

                if ( strcmp(map, hash) == 0 )
                {
                    printf("%s\n", word);
return 0;
                }

                for (int d = 0; d < 52; d++)
                {
                    word[3] = alphabet[d];

                    map =  crypt(word, salt);

                    if ( strcmp(map, hash) == 0 )
                    {
                        printf("%s\n", word);
return 0;
                    }
                    for (int e = 0; e < 52; e++)
                    {
                        word[4] = alphabet[e];

                        map =  crypt(word, salt);

                        if ( strcmp(map, hash) == 0 )
                        {
                            printf("%s\n", word);
return 0;
                        }
                    }
                }
            }
        }
    }
}