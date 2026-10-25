#include<stdio.h>
int main()
{
float amount,finalamount;
int premium;
printf("Enter amount:");
scanf("%f",&amount);
printf("Premium member:");
scanf("%d",&premium);
if (amount>=500)
 {
   if (premium == 1)
   finalamount= amount*0.90;
   else
   finalamount= amount;
 }
else
   finalamount = amount + 50;
printf("\nFinal amount is %.2f",finalamount);        
 return 0;   
}