/*Program to transform a string into 
 its uppercase without using strupr() */

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    printf("Enter the string : ");
    gets(str);

    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z') 
        str[i]=str[i]-32;              //changes the string in uppercase
    }

    printf("Reverse string is : %s",str);
    return 0;
}