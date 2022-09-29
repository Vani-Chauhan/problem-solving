#include<stdio.h>
void main()
{
  int t;
  printf("Input temperature: ");
  scanf("%d",&t);

  if(t<0)
  printf("Freezing weather");
  else if(t<10)
  printf("\nVery cold weather ");
  else if(t<20)
  printf("\nCold weather");
  else if(t<30)
  printf("\nNormal temp");
  else if(t<40)
  printf("\nHot weather");
  else
  printf("\nIts very hot");
}
