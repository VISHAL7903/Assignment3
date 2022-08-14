#include<stdio.h>
int main ()
{
    float sp,cp,pt,ls;
    printf("enter the cost price or selling price \n");
    scanf("%f%f",&sp,&cp);
    if(sp>cp)
    {
        pt=sp-cp;
        printf("profit is %f",pt);
    }
    else if (cp>sp)
    {
        ls=cp-sp;
        printf("loss is %f",ls);
    }
    return 0;
    
}