#include<stdio.h>
int main() 
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    if (x%3==0)
    {
        printf("%d is Divisible by 3",x);
    }
    else if(x%2==0)
    {
        printf("%d is Divisible by 2",x);
    }
    else
    {
        printf("Not Divisible by 2,3");
    }
    return 0;

}