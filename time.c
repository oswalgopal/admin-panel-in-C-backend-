#include<stdio.h>
#include<conio.h>
void main()
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
