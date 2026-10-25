#include<stdio.h>
int main()
{
int userid, password;
printf("Enter user id  and password:");
scanf("%d%d",&userid, &password);
if (userid != 101)
  printf(" User not found");
else
  if (password == 4321)
   printf("Login successful");
  else
   printf("Incorrect Password"); 
 return 0;   
}