//even or odd number
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    if(a%2==0)
        printf("%d is even",a);
    else
        printf("%d is odd",a);
    if(b%2==0)
        printf("%d is even",b);
    else
        printf("%d is odd",b);
    return 0;
}