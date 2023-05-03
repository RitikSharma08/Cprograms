//Program to check whether a string is palindrome or not using function.
#include<stdio.h>
#include<string.h>

 int main()
{
    char str[20];

    printf("Enter a string :");
    gets(str);
    
    if (isPalindrome(str))
    {
      printf("Palindrome");
    }
    else
       printf("not apalindrome ");
}

   int isPalindrome(char s[])
   {
     int l,i;
    l=strlen(s);
    for(i=0;i<l/2;i++)
     {
       if(s[i]!=s[l-1-i]);
       return (0);
     }
      return(1);
    }