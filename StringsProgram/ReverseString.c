// Programe to Reverse a string using strrev() function.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter the string : ");
    gets(s);
    printf("Reverse string is : %s",strrev(s));
    return 0;
}