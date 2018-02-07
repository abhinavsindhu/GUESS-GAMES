#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int icounter;
    printf("\nEnter a value for the counter \n");
    scanf("%d",&icounter);
    while(icounter!=0)
    {
        printf("\n\n\n\t%d",icounter);
        icounter--;
        sleep(1);
        system("clear");
    }
printf("\nCount down timer has expired\n");

}

