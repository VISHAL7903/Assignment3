#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number A B C \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("A= %d B= %d C= %d\n",a,b,c);
    if(a>=b && a>=c)
    {
        printf("A = %d is the greatest ",a);
    }
    else if (b>=a && b>=c)
    {
        printf("B = %d is the greatest",b);
    }
    else
    {
        printf("C = %d is the greatest",c);
    }
    return 0;
    
}