// Calculate the total marks and percentage

#include<stdio.h>
#include<conio.h>

int main()
{
float S1,S2,S3,total,percentage;
clrscr();
printf("\t\t\tMARKS");
printf("\n\nEnter marks of subject,S1=");
scanf("%f",&S1);
printf("\nEnter marks of subject,S2=");
scanf("%f",&S2);
printf("\nEnter marks of subject,S3=");
scanf("%f",&S3);
total=S1+S2+S3;
printf("\nTotal marks=%f",total);
percentage=(S1+S2+S3)/100;
printf("\nPercentage=%f",percentage);
getch();
return 0;

}
