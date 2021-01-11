#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    
    fgets(ch,sizeof(ch),stdin);
    int len=strlen(ch);
    len--;
    for(int i=0;i<len;i++)
    {
    
          for(int j=i+1;j<=len;j++)
          {
                       for(int k=i;k<j;k++)
                       {
                           printf("%c",ch[k]);
                       }
                       printf(",");
          }
          printf("\n");
        
    }
    
    return 0;
}