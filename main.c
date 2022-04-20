# include <stdio.h>
int main()
{
    int a,b;
    printf ("enter value of a and b\n");
    scanf("%d",&a);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped nos are :%d %d",a,b);
    return 0;
}