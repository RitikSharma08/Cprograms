//Program to check whether a string is palindrome or not.
#include<stdio.h>
#include<string.h>
 int main()
{
    char str[20];
    int l,i;
    printf("Enter a string :");
    gets(str);

    l=strlen(str);
    for(i=0;i<l/2;i++)
 {
    if(str[i]!=str[l-1-i])
    {
        printf("Not a Palidrome");
        break;
    }
 }
       if(i==l/2)
       printf("Palindrome");

       return 0;
}