#include<stdio.h>
int main()
{
    int n;
    int a[2][2];   //Declaring 2D Array
    int b[2][2];
    int c[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {//Getting Data from the use
            printf("Enter the Element[%d][%d] for A -:",i,j);
            scanf("%d",&a[i][j]);
            c[i][j]=0;
        }
    }

    printf("\n");

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {//Getting Data from the use
            printf("Enter the Element[%d][%d] for B-:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
 //showing user options
    printf("******************************Make a Choice******************************\n");
    printf("1. Add Two Matrix\n");
    printf("2. Subract Two Matrix\n");
    printf("3. Multiply Two Matrix\n");
    printf("4. Transpose Two Matrix\n");
    printf("*************************************************************************\n");
    scanf("%d",&n);

   //switch to go to the choosen option
    switch(n)
    {
    
    case 1:  //Addiing two matrix
    {
          for(int i=0;i<2;i++)
         {
              for(int j=0;j<2;j++)
             {
                      c[i][j]=a[i][j]+b[i][j];
             }
         }

         break;
         printf("Addition of Two Matrix is -:\n");
    }

    case 2: //subracting  two matrix
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                c[i][j]=a[i][j]-b[i][j];
            }
        }
        break;
        printf("Subraction of two Matrix is -:\n");
    }
    case 3:
    {        //Multiplying two matrix
        
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                for(int k=0;k<2;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        break;

        printf("Product of Two Matrixs is \n");

    }
    case 4:
    {             //Transposed of the matrix
        int l;
        printf("Tell which matrix to be transposed 1 or 2\n");
        scanf("%d",&l);
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(l==1)
                   { 
                       c[i][j]=a[j][i];
                   }
                else
                {
                    c[i][j]=b[j][i];
                }
                
            }
        }
        printf("Transpose of Matrix is \n");
        break;

    
    default:
         printf("Invalid Entry \n");
    }


}

     for(int i=0;i<2;i++)
     {
          for(int j=0;j<2;j++)
         {
             printf("%d ",c[i][j]);
         }
         printf("\n");
     }
   
   return 0;
}
