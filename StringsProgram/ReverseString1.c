// programe to reverse a string without using strrev() function.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50] ,ch;
    int length ,i;
    printf("Enter the string : ");
    gets(s);
    
    for(length=0; s[length] ;length++); 
    //To determine the length of string 
    
    for(i=0;i<length/2;i++)
    {   ch=s[i];
        s[i]=s[length-1-i]; //swapping of character
        s[length-1-i]=ch ; 
    }
    
    printf("Reverse string is : %s",s);
    return 0;
}