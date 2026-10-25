#include<stdio.h>
int main()
{
int age, creditscore;
float monthlyincome;
printf("Enter age,monthly income,credit score:");
scanf("%d%f%d",&age,&monthlyincome,&creditscore);
if (age<21||age>60)
  printf("Loan rejected:age not in 21 to 60");
 else if (monthlyincome < 25000)
  printf("Loan rejected:monthly income less than 25000");
 else if (creditscore < 700)
  printf("Loan rejected : credit score less than 700");
else
  printf("Loan is approved");
 return 0;   
}