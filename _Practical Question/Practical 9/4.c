#include<stdio.h>
struct final
{
    char name[20];
    float mst1;
    float mst2;
    int attend;
}s[2];

void eligible(int);

int main()
{
    
    for(int i=0;i<2;i++)
    {
        printf("\nEnter the name of student-:\n");
        fflush(stdin);
        scanf("%s",s[i].name);
        fflush(stdin);
       
        printf("\nEnter the score of MST-1-:");
        scanf("%f",&s[i].mst1);

        printf("\nEnter the score of MST-2-:");
        scanf("%f",&s[i].mst2);

        printf("\nEnter the Lecture Attended from 80-:");
        scanf("%d",&s[i].attend);
    }
    eligible(2);
    return 0;
}
void eligible(int n)
{
    int check=1;
    printf("All Students who are Detained -:\n");
   for(int i=0;i<2;i++)
   {  
       check=1;
       float att = (s[i].attend*100)/80;

      if(att<=75)  
      {
          float per = s[i].mst1 + s[i].mst2;
          per = (per*100)/200;
      
         if(per<=80)
         {
             check=0;
         }
      }
      
      if(check==0)
      {   
          fflush(stdout);
          printf("Student %s is Detained",s[i].name);
      }
   }   
}