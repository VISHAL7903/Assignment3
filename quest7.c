#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter the three number");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D<0)
    {
        printf("Roots are imaginary");
    }
    else if(D==0)
    {
        printf("Both are equal");
    }
    else if(D>0)
    {
        printf("Roots are real and distinct");
    }
    return 0;
}

