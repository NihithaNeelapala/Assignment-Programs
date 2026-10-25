#include<stdio.h>
int main()
{
float l,b,area,perimeter;
printf("Enter length and breadth:");
scanf("%f%f",&l,&b);
area= l*b;
printf("\nArea is %.2f",area);
perimeter= 2*(l+b);
printf("\nPerimeter is %.2f",perimeter);
  return 0;   
}