#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
       printf("Both are same");
    }
    else if (a>b)
    {
        printf("A = %d is grater",a);
    }
    else
    {
    printf("B = %d is a grater",b);
    }
    return 0;
    
}