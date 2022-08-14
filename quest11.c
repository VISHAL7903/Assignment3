#include<stdio.h>
int main()
{
    int math,sci,hindi,eng,soci;
    printf("Enter the marks of 5 Subject \n");
    scanf("%d%d%d%d%d",&math,&sci,&hindi,&eng,&soci);
    printf("Math= %d Science= %d Hindi= %d English= %d SocialScience=%d\n",math,sci,hindi,eng,soci);
    if (math>100 ||sci>100 ||hindi>100 ||eng>100 ||eng>100 ||soci>100 )
    {
        printf("Not valid number");
    }
    else if (math>33 &&sci>33 &&hindi>33 &&eng>33 &&eng>33 &&soci>33)
    {
        printf("pass",math,sci,hindi,eng,soci);
    }
    else 
    {
        printf("Fail",math,sci,hindi,eng,soci);
    }
    return 0;
    

    
}