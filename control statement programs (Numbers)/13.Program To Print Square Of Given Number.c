// 1.Program To Print Square Of Given Number.c


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0, Sqr = 0;

    printf("\n Enter Number = ");
    scanf("%d", &No);

    Sqr = No * No;

    printf("\n Square Of %d =%d.", No, Sqr);

    printf("\n\n Thanks");

    getch();
    return 0;
}
