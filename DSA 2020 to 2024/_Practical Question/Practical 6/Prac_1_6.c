#include<stdio.h>
#include<string.h>

int main()
{
       char ch[20];
       int len;
       printf("Enter a Password\n");
       fgets(ch,sizeof(ch),stdin);
       len = strlen(ch);
       len++;
       if(len>=6)
       {
           printf("Passed! Password is Passed in Length Test\n");
       }
       else
       {
           printf("FAIL! Password don't have 6 charcters\n");
           return 0;
       }
       
       int digi=0,ca=0,lc=0,sc=0;
       for(int i=0;i<len;i++)
       {
           if(ch[i]>=48&&ch[i]<=57)
           {
              digi=1; 
           }
           if(ch[i]>=65&&ch[i]<=90)
           {
              ca=1;
           }
           if(ch[i]>=97&&ch[i]<=122)
           {
               lc=1;
           }
           if(ch[i]>=32&&ch[i]<=64)
           {
               sc=1;
           }
       }
       
       
       if(digi)
       {
           printf("Passed! Digit Test\n");
       }
       else
       {
           printf("Fail ! Digit Test\n");
            printf("%s",&ch);
            return 0;
       }

       
       if(ca)
       {
           printf("Passed! Capital Letter Test\n");
       }
       else
       {
           printf("Fail! Capital Letter Test\n");
           printf("%s",&ch);
            return 0;
       }
       
       if(lc)
       {
           printf("Passed! Lower Case Letter Test\n");
           
       }
       else
       {
           printf("Fail! Lower Case Letter Test\n");
           printf("%s",&ch);
            return 0;
       }
       
       if(sc)
       {
           printf("Passed! Special Character Test\n");
           
       }
       else
       {
           printf("Fail! Special Character Test\n");
           printf("%s",&ch);
            return 0;
       }
       
       printf("%s",&ch);            
       return 0;
}