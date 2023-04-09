#include<stdio.h>
void main()
{
    char i,a[10];
    printf("Enter the ten character in array:");
    for(i=0;i<10;i++)
    scanf("%c",&a[i]);
    for(i=0;i<10;i++)
    {
        printf("%c ",a[i]);
    }
}
