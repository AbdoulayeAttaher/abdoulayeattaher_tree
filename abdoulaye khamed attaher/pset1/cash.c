#include <stdio.h>
#include <cs50.h>

int main(void)

{

    // on annonce les pieces de monnaie qui existent dans la zone CFA

    int a = 500 , b = 250 , c = 200 , d = 100 , e = 50 , f = 25 , g = 10 , h = 5 , j = 1 ;


    int montant = get_int("Ecrivez le montant:");

    int i = 0;

    while ( montant >= a )

    {
        montant = montant - a;
        i++;
    }

    while ( montant >= b )

    {
        montant = montant - b;
        i++;
    }

    while ( montant >= c)

    {
        montant = montant - c;
        i++;
    }

    while ( montant >= d )

    {
        montant = montant - d;
        i++;
    }

    while ( montant >= e )

    {
        montant = montant - e;
        i++;
    }

    while ( montant >= f )

    {
        montant = montant - f;
        i++;
    }

    while ( montant >= g )

    {
        montant = montant - g;
        i++;
    }

    while ( montant >= h )

    {
        montant = montant - h;
        i++;
    }

    while ( montant >= j)

    {
        montant = montant - j;
        i++;
    }

    printf("Nous devons vous remettre %i pieces\n ", i);



}