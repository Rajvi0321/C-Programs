//WAP Calculate Simple Interest

#include<stdio.h>
#include<conio.h>

int main()
{
float P,R,T,SI;
clrscr();
printf("\t\t\tCalculate the Simple Interest");
printf("\nEnter P =");
scanf("%f",&P);
printf("\nEnter R =");
scanf("%f",&R);
printf("\nEnter T =");
scanf("%f",&T);
SI=(P*R*T)/100;
printf("\nSimple Interest=%f",SI);
getch();
return 0;
}
