#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter a and b");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("swapped nos are :%d %d",a,b);
    return 0;
}