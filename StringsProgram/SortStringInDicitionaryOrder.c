//program to sort strings in dictionary order
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10] ,s[10];
    int i,r,round;


    printf("Enter the names of 5 students :");
    for(i=0;i<=4;i++)
     gets(str[i]);

    for(round=1;round<=4;round++)  // rounds of swapping
    {
      for(i=0;i<=4-round;i++)
      {
         r=strcmp(str[i],str[i+1]);   //swapping
         if(r>0)
        {
          strcpy(s,str[i]);
          strcpy(str[i],str[i+1]);
          strcpy(str[i+1],s);
        }
      }
    }

    printf("\nStrings in Dicionary Order is \n");
    for(i=0;i<=4;i++)
    puts(str[i]);

    return 0;
}
