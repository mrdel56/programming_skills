#include<stdio.h>
int main()
{
    char str[100];
    int i;
 
    scanf("%s",str);
 
    
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[0]>='a' && str[0]<='z')
    {
        str[0]=str[0]-32;
    }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
    return 0;
}