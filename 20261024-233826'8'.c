#include<stdio.h>
int main()
{
float bmi,weight,height;
printf("Enter weight in kg and height in meters:");
scanf("%f%f",&weight,&height);
bmi= weight/(height*height);
printf("\nBMI is %.2f",bmi);
if (bmi<18.5)
  printf("\nUnderweight");
   else if (bmi<25)
   printf("\nNormal");
   else if (bmi<30)
   printf("\nOverweight");
else
  printf("\nObese");
    return 0;   
}