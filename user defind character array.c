#include<stdio.h>
void main()
{
    char i,a[100];
    printf("Enter the numbers in array:");
    for(i=0;i<100;i++)
    scanf("%c",&a[i]);
    for(i=0;i<100;i++)
    {
        printf("%c ",a[i]);
    }
}
