//WAP to check whether the no. is +ve, -ve or zero

#include<stdio.h>
#include<conio.h>

int main()
{
int no;
clrscr();
printf("\nEnter the value for N1: ");
scanf("%d",&no);
if(no>0)
	printf("\nIt is a positive number");
else if(no<0)
	printf("\nIt is a negetive number");
else
	printf("\nNumber is zero");
getch();
return 0;
}
