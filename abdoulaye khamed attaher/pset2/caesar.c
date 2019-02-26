// #abdoulaye khamed attaher

#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

 int main (int argc, string argv[])

{
    {

    if (argc ==  2)
    {
        string word;
        word = get_string("plaintext:");
        int k = atoi(argv[1]);

        printf("cyphertext:");

        for (int i=0 ; i<strlen(word); i++)

        if(isalpha(word[i]))
        {
            if(islower(word[i]))
            {
                printf( "%c", (((word[i]-97)+k)%26)+97);
            {

            if(isupper(word[i]))
            {
                printf( "%c", (((word[i]-65)+k)%26)+65);
            }
        }
    }

    else
    {
        printf("%c",word[i]);
    }


}}}}
