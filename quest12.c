#include<stdio.h>
int main()
{
    
    char ch;
    printf(" enter the uppercase lowercase digit  special character :\n");
    scanf("%c",&ch);
   
    if (ch>='A' && ch<='Z')
    {
        printf("Upper Case",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("lower case",ch);
    }   
    else
    {
        printf("Not Valid");
    }
      return 0;
}