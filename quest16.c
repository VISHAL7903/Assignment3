
#include<stdio.h>
int main()
{
    
    char ch;
    printf("enter the uppercase lowercase digit special character\n:");
    scanf("%c",&ch);
   
    if (ch>='A' && ch<='Z')
    {
        printf("Upper Case");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("lower case");

    }
    else if(ch>='0' && ch<='9')
    {
        printf("Digit");
    }
    else 
    {
        printf("Special Character");
    }
    return 0;
}