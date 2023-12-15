#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    c=((a/b)*100);
    printf("(%d/%d)*100=%d",a,b,c);
    return ;
}