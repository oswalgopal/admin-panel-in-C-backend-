#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

int i,Y1,M1,I1,Y2,M2,I2,choice;
char Z,CH,N1[1],N2[1],password[10],username[10],ch,user[10]={'v','v','c','o','d','e','r','s'},pass[5]={'a','g','m','v','v'};

clrscr();
printf("CHOOSE USER\n\n");
printf("\NEW USER TYPE:-S\t\t\t");
printf("ADMINISTRATOR TYPE:-A\n");
scanf("%c",&CH);
fflush(stdin);
if(CH=='S')
{
goto exit2;

}

else if(CH=='A')
printf("enter username:- ");
gets(username);

if(strcmp(username,user)!=0)
{
 printf("wrong id ");
 printf("\tenter id again");
 gets(username);
}
 printf("enter your password (5 digit) :-");

 for(i=0;i<5;i++)
 {
  ch=getch();
  password[i]=ch;
  ch='*';
  printf("%c",ch);
 }
 printf("\n\n");

 for(i=0;i<5;i++)
 {
  if(password[i]!=pass[i])
  if(i==5)
  {
  printf("wrong password");
  goto exit;
  }
 }
 printf("\nwhich user details u want");

 printf("\n\n 1.gopal \n 2. arpit \n 3.vijay \n 4. manisha \n 5. vinay \n");
 scanf("%d",&choice);

 printf("\n\n\n");
 if(choice==1)
 {
  printf("name= Gopal\n");
  printf("gender=male\n");
  printf("DOB=25/05/2000\n");
  printf("age=18\n");
 }
 if(choice==2)
 {

  printf("name= arpit\n");
  printf("gender=male\n");
  printf("DOB=22/06/2000\n");
  printf("age=18\n");

 }

 if(choice==3)
 {

  printf("name= vijay\n");
  printf("gender=male\n");
  printf("DOB=15/09/2000\n");
  printf("age=18\n");
 }


 if(choice==4)
 {

  printf("name= manisha\n");
  printf("gender=female\n");
  printf("DOB=3/04/2000\n");
  printf("age=18\n");

 }


 if(choice==5)
 {

  printf("name= vinay\n");
  printf("gender=male\n");
  printf("DOB=12/5/2000\n");
  printf("age=18\n");
 }
 exit:
 {
 printf(" wrong password \n run again");
 }
 exit2:
 {
 printf("Registration are already done in program 1");
 }

getch();
}
