// 1C.Program To Print Square Of Given Number.c


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No = 0, Cube = 0;

    printf("\n Enter Number = ");
    scanf("%d", &No);

    Cube = No * No * No;

    printf("\n Cube Of %d = %d.", No, Cube );

    printf("\n\n Thanks");

    getch();
    return 0;
}
