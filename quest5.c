#include<stdio.h>
int main()
{
    int x;
    printf("Enter the three digit number");
    scanf("%d",&x);
    if(x>99&&x<1000)
    printf("Three digit number");
    else
    printf("Not three digit number");
    return 0;
}