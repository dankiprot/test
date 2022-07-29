#include "main.h"


int main()
{
  shapes();
  say_helo();
  printrectangle();
  printprimenumbers();
  //printd();
    //printd();


    /**  int result;
      int number;
      printf("Enter an integer\n");
      scanf("%d",&number);
      result=printnumbers(number);
      printf("%d",result);
  //  say_helo();
    //  shapes();
    /** int  result=add_numbers(100,23);
      int product=add_numbers(20,5);
      printf("%d\n",result);
      printf("%d\n",product);*/

      // printrectangle();

    //   printprimenumbers();
    return 0;
}/**
int add_numbers(int a,int b)
{
    int sum=a+b;
    int multiply=a*b;
    //  printf("\n%d\n",a+b);int
//   printf("\n");
    return(sum);
}*/
void printrectangle(int rows,int columns)
{
    int nooflines=10;

    for (rows=0; rows<=nooflines; rows++)
    {
        for(columns=0; columns<=rows; columns++)

        {
            printf("*");
        }
        printf("\n");

    }

}

void printprimenumbers(int x, int y)
{
    for(x=2; x<=100; x++)
    {
        for (y=2; y<=x; y++)
        {
            if (x%y==0)
            {
                break;
            }
        }
        if (x==y)
        {
            printf("%d is prime number\n",x);
        }
    }
}

void say_helo()
{

    printf("Hello world!\n");

    printf("Below are the shapes\n\n\n");
}

void shapes(int row,int column)
{
    int noofrows=6;

    for(row=0; row<=noofrows; row++)
    {

        for (column=0; column<=noofrows; column++)
        {
            printf("*");
        }
        printf("\n");
    }

    // printf("\n");
}

void printd(int n)
{
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    if (n / 10)
        printd(n / 10);
    putchar(n % 10 + '0');
}
