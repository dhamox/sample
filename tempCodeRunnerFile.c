#include<stdio.h>
int main()
{
    int  breadth,length,area;
    printf ("enter the breadth value:");
    scanf("%d",&breadth);
    printf("enter the length value:");
    scanf("%d",&length);
    area =breadth*length;
    printf("area of rectangle = %d",area);
    return 0;
}