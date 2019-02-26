#include <cs50.h>
#include <stdio.h>

int main(void)

{

    long long cardnumber = 0;

    do

    {
      printf("Write down your ID card: ");
      cardnumber = get_long_long(" ");

    }
      while (cardnumber < 0);

      int count = 0;
      long long digits = cardnumber;

      while (digits > 0)

      {
        digits = digits/10;
        count++;
      }

    if ((count != 14) && (count != 16) && (count != 17))

      {
        printf("your card is invalid\n");
      }

    int number[count];

    for (int i = 0; i < count; i++)

      {
        number[i] = cardnumber % 10;
        cardnumber = cardnumber / 10;
      }

    int originalnumber[count];

    for (int i = 1; i < count; i++)

      {
        originalnumber[i] = number[i];
      }

    for (int i = 1; i < count; i+=2)

      {
        number[i] = number[i] * 2;
      }

    int v = 0;
    int temp;

    if (count == 13)

      {

      for (int i = 0; i < count; i++)

      {
        temp = (number[i] % 10) + (number[i]/10 % 10);
        v = v + temp;
      }

      if (originalnumber[12] == 4 && v % 10 == 0)

      {
        printf("Your card is a VISA card\n");
      }

      else

      {
        printf("Your card is invalid\n");
      }

    }

    if (count == 15)

      {

      for (int i = 0; i < count; i++)

      {
        temp = (number[i] % 10) + (number[i]/10 % 10);
        v = v + temp;
      }

      if (originalnumber[14] == 3 && v % 10 == 0 && (originalnumber[13] == 4 || originalnumber[13] == 7))

      {
        printf("Your card is an AMEX card\n");
      }

      else

      {
        printf("Your card is invalid\n");
      }
    }

      if (count == 16)

      {

      for (int i = 0; i < count; i++)

      {
        temp = (number[i] % 10) + (number[i]/10 % 10);
        v = v + temp;
      }

      if (originalnumber[15] == 4 && v % 10 == 0)


        {
          printf("Your card is a VISA card\n");
        }

      else if (originalnumber[15] == 5 && v % 10 == 0 && (originalnumber[14] == 1 || originalnumber[14] == 2 || originalnumber[14] == 3 || originalnumber[14] == 4 || originalnumber[14] == 5))

        {
            printf("Your card is a MASTERCARD card\n");
        }

      else

      {
        printf("Your card is invalid\n");
      }


      }


    return 0;
}
