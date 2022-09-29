#include<stdio.h>
void main()
{
   int a,b;
   printf("enter the value of a and b\n");
   scanf("%d%d",&a,&b);

   if(a>0&&b>0)
   printf("I quadrant");
   else if(a<0&&b>0)
   printf("II quadrant");
   else if("a<0&&b<0")
   printf("III quadrant");
   else if("a>0&&b<0")
   printf("IV quadrant");
   else
   printf("origin");

}
