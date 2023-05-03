//Calculate the length of the string.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int length;
    printf("Enter the name:");
    gets(s);
    length=strlen(s);
    printf("Length of the %s is : %d ",s,length);
    return 0;
}