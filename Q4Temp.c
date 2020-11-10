#include<stdio.h>

int main()
{
    float Temp;

    printf("Temperature of water? \n");
    scanf("%f", &Temp);
      if(Temp<=0)
       printf("Frozen\n");
      else if(Temp<=12)
       printf("Cold\n");
      else if(Temp<=25)
       printf("Warm\n");
      else if(Temp<=75)
       printf("Hot\n");
      else if(Temp<=100)
       printf("Very hot\n");
      else
       printf("Burning\n");
       
    return 0;
}