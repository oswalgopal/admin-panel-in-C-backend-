#include<stdio.h>
#include<conio.h>
#include<string.h>
void registration();
void login();
void timeslot();
void book();
void notification();
void main()
{int x;
clrscr();
printf("Enter The Page You Want To Enter:\n1)REGISTRATION\n2)LOGIN\n3)TIME SLOTS\n4)BOOK\n5)NOTIFICATION");
scanf("%d",&x);
if(x==1)
{registration();}
if(x==2)
{login();}
if(x==3)
{timeslot();}
if(x==4)
{book();}
if(x==5)
{notification();}
getch();
}

void registration()
{int i,j,age,date,month,year;
long int pincode;
char name[20],peraddress[100],phone[14];
char gen;
clrscr();
fflush(stdin);
printf("** form to enter user information **\n");
printf("\nenter name = ");
gets(name);
printf("\nenter age = ");
scanf("%d",&age);
fflush(stdin);
printf("\nenter gender  (F=female and M=male) =\t");
scanf("%c",&gen);
if(gen=='F'||'M')
{printf("gender entered is correct\n");}
else
{printf("wrong entry\n");
}
fflush(stdin);
printf("\nenter mobile number = ");
gets(phone);
j=strlen(phone);
while(j!=10)
{printf("enter a valid number =");
gets(phone);
j=strlen(phone);
if(j==10)
{break;}
continue;
}
fflush(stdin);
printf("\nenter date =");
scanf("%d",&date);
if(date>=1&&date<=31)
printf("date entered correctly\n");
else
printf("wrong entry\n");
fflush(stdin);
printf("\nenter month =");
scanf("%d",&month);
if(month>=1&&month<=12)
printf("month entered correctly\n");
else
printf("wrong entry\n");

fflush(stdin);
printf("\nenter year =");
scanf("%d",&year);
if(year<=2018)
printf("year entered correctly\n");
else
printf("wrong entry\n");
fflush(stdin);
printf("\nenter permanent address =");
gets(peraddress);
fflush(stdin);
printf("\nenter pincode =");
scanf("%ld",&pincode);
printf("\n** form is succesfully submitted **");
getch();
}
void timeslot()
{
 char name[20];
 int i,choose;
long int mobno,dobook;
 clrscr();

another:
{
 printf("1) From 12 p.m and 1p.m\n");
 printf("2) From 1 p.m and 2 p.m\n");
 printf("3) From 2 p.m and 3p.m\n");
  printf("4) From 3 p.m and 4p.m\n");
 printf("5) From 4 p.m and 5 p.m\n");
 printf("6) From 5 p.m and 6p.m\n");
  printf("7) From 6 p.m and 7p.m\n");
 printf("8) From 7 p.m and 8 p.m\n");
 printf("9) From 8 p.m and 9p.m\n");
  printf("10) From 9 p.m and 10p.m\n");
 printf("choose the given time slot number\n");
 scanf("%d",&choose);
switch(choose)
{
case 1:
printf("admin is available \n");
break;
case 2:
printf("admin is available\n");
break;
case 3:
printf("SORRY admin is available only in 1,2,4,5,8 \n");
goto another;
case 4:
printf("admin is available \n");
break;
case 5:
printf("admin is available\n");
break;
case 6:
printf("SORRY admin is available only in 1,2,4,5,8\n");
goto another;
case 7:
printf("SORRY admin is available only in 1,2,4,5,8\n");
goto another;
break;
case 8:
printf("admin is available");
break;
case 9:
printf("admin is available\n");
case 10:
printf("SORRY admin is available only in 1,2,4,5,8\n");
goto another;
break;
default:
printf("wrong entry");
}
}
getch();
}


void book()
{
char name[20];
int i,choose;
long int mobno,dobook;
 clrscr();

another:
{
 printf("1) From 12 p.m and 1p.m\n");
 printf("2) From 1 p.m and 2 p.m\n");
 printf("3) From 2 p.m and 3p.m\n");
  printf("4) From 3 p.m and 4p.m\n");
 printf("5) From 4 p.m and 5 p.m\n");
 printf("6) From 5 p.m and 6p.m\n");
  printf("7) From 6 p.m and 7p.m\n");
 printf("8) From 7 p.m and 8 p.m\n");
 printf("9) From 8 p.m and 9p.m\n");
  printf("10) From 9 p.m and 10p.m\n");
 printf("choose the given time slot number\n");
 scanf("%d",&choose);
switch(choose)
{
case 1:
printf("admin is available \n");
goto form;
break;
case 2:
printf("admin is available\n");
goto form;
break;
case 3:
printf("admin is not available try again\n");
goto another;
case 4:
printf("admin is available \n");
goto form;
break;
case 5:
printf("admin is available\n");
goto form;
break;
case 6:
printf("admin is not available try again\n");
goto another;
case 7:
printf("admin is not available try again \n");
goto another;
break;
case 8:
printf("admin is available");
goto form;
break;
case 9:
printf("admin is available\n");
goto form;
break;
case 10:
printf("admin is not available try again\n");
goto another;
break;
default:
printf("wrong entry");
}
}
form:
{printf("fill the form:-\n");
printf("enter name\n mobile number\n");
gets(name);
fflush(stdin);
scanf("%ld",&mobno);
fflush(stdin);
scanf("%d",&dobook);
fflush(stdin);
}
printf("you haved booked sucessfully\n thank you");
getch();
}

void notification()
{
 char name[20];
 int i,choose,again;
long int mobno,dobook;
 clrscr();

another:
{
 printf("1) From 12 p.m and 1p.m\n");
 printf("2) From 1 p.m and 2 p.m\n");
 printf("3) From 2 p.m and 3p.m\n");
  printf("4) From 3 p.m and 4p.m\n");
 printf("5) From 4 p.m and 5 p.m\n");
 printf("6) From 5 p.m and 6p.m\n");
  printf("7) From 6 p.m and 7p.m\n");
 printf("8) From 7 p.m and 8 p.m\n");
 printf("9) From 8 p.m and 9p.m\n");
  printf("10) From 9 p.m and 10p.m\n");
 printf("choose the given time slot number\n");
 scanf("%d",&choose);
switch(choose)
{
case 1:
printf("admin is available \n");
goto form;
break;
case 2:
printf("admin is available\n");
goto form;
break;
case 3:
printf("admin is not available try again\n");
goto another;
case 4:
printf("admin is available \n");
goto form;
break;
case 5:
printf("admin is available\n");
goto form;
break;
case 6:
printf("admin is not available try again\n");
goto another;
case 7:
printf("admin is not available try again \n");
goto another;
break;
case 8:
printf("admin is available");
goto form;
break;
case 9:
printf("admin is available\n");
goto form;
break;
case 10:
printf("admin is not available try again\n");
goto another;
break;
default:
printf("wrong entry");
}
}
form:
{printf("fill the form:-\n");
printf("enter name\n mobile number\n");
gets(name);
fflush(stdin);
scanf("%ld",&mobno);
fflush(stdin);
scanf("%d",&dobook);
fflush(stdin);
}
printf("you haved booked sucessfully SLOT NO %d\n thank you\n",choose);

printf("USER 2 ENTER THE SLOT NO FOR BOOKING\n");
scanf("%d",&again);
fflush(stdin);
if(choose==again)
{printf("this slot is already booked");
}

printf("USER 2 haved booked sucessfully SLOT NO %d\n thank you\n",again);
getch();
}


void login()
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
printf("registered already done") ;
}

else if(CH=='A')
printf("\n enter username:- ");
gets(username);

if(strcmp(username,user)!=0)
{

 printf("\tenter id ");
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
  {

  if(i==1)
  {
  printf("wrong password");
  goto exit;
  }

  if(i==2)
  {
  printf("wrong password");
  goto exit;
  }
  if(i==3)
  {
  printf("wrong password");
  goto exit;
  }

  if(i==4)
  {
  printf("wrong password");
  goto exit;
  }
  if(i==5)
  {

  printf("wrong password");
  goto exit;
  }
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







