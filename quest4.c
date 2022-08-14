#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number ");
    scanf("%d",&x);
    if(x&1==1)
    printf("odd");
    else
    printf("even");
    return 0;
}