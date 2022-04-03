//WAP Area of a Circle

#include<stdio.h>
#include<conio.h>
#define pi 3.14

int main()
{
float r,area;
clrscr();
printf("Radius of a circle is:=");
scanf("%f",&r);
area=pi*r*r;
printf("Area of the Circle is:=%f",area);
getch();
return 0;
}