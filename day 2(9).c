#include<stdio.h>
void main()
{
   int n,i,j,k;
   printf("enter limit of pattern: ");
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
      for(k>n-i;k>=1;k--)
      {
      printf(" ");
      }
      for(j=1;j<=2*i-1;j++)
      {
      printf("*");
      }
      printf("\n");
   }
   for(i=n;i>=1;i--)
   {
      for(k>n;k>=1;k--)
      {
      printf(" ");
      }
      for(j=1;j<=2*i-1;j++)
      {
      printf("*");
      }
   printf("\n");
   }

}
