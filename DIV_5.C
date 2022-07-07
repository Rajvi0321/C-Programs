//WAP to check whether the no is divisible by 5

#include<stdio.h>
#include<conio.h>

int main()
{
int no;
clrscr();
printf("\nEnter the number: ");
scanf("%d",&no);
if(no%5==0)
	printf("\nNumber is divisible by 5");
else
	printf("\nNumber is not divisible by 5");
getch();
return 0;
}