#include<stdio.h>
int main()
{
int r1,c1,r2,c2,i,j,k;
int a[10][10],b[10][10],res[10][10];
printf("Enter the first matrix:");
scanf("%d %d",&r1,&c1);
printf("Enter the second matrix:");
scanf("%d %d",&r2,&c2);
     if(c1!=r2)
   {
       printf("Matrix are not multiple\n");
   }
  else
 {
    printf("Enter the element of the matrix-A:\n");
    for(i=0;i<r1;i++)
   {
         for(j=0;j<c1;j++)
         {
             scanf("%d",&a[i][j]);
         }
}
 }
printf("Enter the element of the matrix-B:\n");
for(i=0;i<r2;i++)
{
      for(j=0;j<c2;j++)
     {
          scanf("%d",&b[i][j]);
     }
}
for(i=0;i<r1;i++)
{
     for(j=0;j<c2;j++)
    {
         res[i][j]=0;
         for(k=0;k<c1;k++)
        {
            res[i][j]=a[i][j]+b[i][j];
         }
     }
  }
  printf("The product of two matrix is :\n");
  for(i=0;i<r1;i++)
  {
     for(j=0;j<c2;j++)
     {
        printf("%d\t",res[i][j]);
}
printf("\n");
}
return 0;
}
