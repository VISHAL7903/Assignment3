#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    if(x>0)
    {
        printf("Positive Number");
    }
    else if(x<0)
    {
        printf("negative");
    }

    else
    {
        printf("Zero");
    }
    
    return 0;
}