//Approach 4: Maximum Form two Numbers-Using if-else:-
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Num1=0,Num2=0;

    Greate:

    printf("\n Enter 2 Integer Number= ");
    scanf("%d%d",&Num1,&Num2);

    if(Num1==Num2)
    {
        printf("\n Both given number are equal \n Please Enter Different Number To Compare.\n ");
        goto Greate;

    }
    else if(Num1>Num2)
    {
        printf("\n Number %d is Maximum",Num1);

    }
    else
    {
        printf("\n Number %d is Maximum",Num2);
    }
    DWN:

    printf("\n\nThanks!!!");

    getch();
    return 0;
}
