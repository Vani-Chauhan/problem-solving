#include<stdio.h>
#include<math.h>
void main()
{
    int x,i,j,n,m;
    float s=0;
    printf("Enter the number of x: ");
    scanf("%d",&m);
    printf("Enter number of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
    if(i%2==0)
      {
        s=s+(float)(pow(m,i)/fact);
      }
    else
      {
        s=s-(float)(pow(m,i)/fact);
      }
    }
    printf("Sum of series is: %f",s);
}
