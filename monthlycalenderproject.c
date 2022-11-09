#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int getthefirstdayoftheyear(int year)
{
    int day= (year*365 + ((year-1)/4) - ((year-1)/100) + ((year-1)/400)) %7 ;
    return day;
}
int main()
{
    system("color A");
char *months[]={"January","February","March","April","May","June","Julay","August",
"September","October","November","December"};

int daysinmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};

int i,j,TotalDays,weekday=0,spacecounter=0,year;
printf("enter the year:-\n");
scanf("%d",&year);
printf("\n\n\n------------------welcome to %d------------------\n\n\n",year);

//check leap year or not
if(year%4==0 && year%100!=0 || (year%400==0));
{
    daysinmonth[1]=29;
}

weekday = getthefirstdayoftheyear(year);

for(i=0;i<12;i++)
{
printf("\n\n\n------------------%s-------------------------------\n",months[i]);
printf("\n\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");
for(spacecounter=1;spacecounter<=weekday;spacecounter++)
{
    printf("      ");
}

TotalDays= daysinmonth[i];

for(j=1;j<=TotalDays;j++)
{
printf("%6d",j);
weekday++;
if(weekday>6)
{
    weekday=0;
    printf("\n");
}
}
}

}