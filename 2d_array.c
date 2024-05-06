// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int **ptr,n,i,rows,colms;
int main() {
    // Write C code here
    printf("enter the number of rows and colum :");
    scanf("%d %d",&rows,&colms);
    ptr=(int**)malloc(rows*sizeof(int*));
   for(i=0;i<rows;i++)
   {
       ptr[i]=(int*)malloc(colms*sizeof(int*));
   }
   for(i=0;i<rows;i++)
   {
       for(n=0;n<colms;n++)
       {
           printf("\nenter the value for ptr[%d][%d]:",i,n);
           scanf("%d",&ptr[i][n]);
       }
   }
for(i=0;i<rows;i++)
   {
       for(n=0;n<colms;n++)
       {
           printf(" %d",ptr[i][n]);
          
       }
       printf("\n");
       
   }

    return 0;
}