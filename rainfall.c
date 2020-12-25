/* Rainfall
EGRE245 Fall 2018
Mikita Popel */
#include <stdio.h>
#include <math.h>

// This program calculates total rainfall and outputs pertinent information based on an inputted .dat file
int main(void) {
int a1,a2,a3,a4,a5,a6,a7,b1,b2,b3,b4,b5,b6,b7,c1,c2,c3,c4,c5,c6,c7,d1,d2,d3,d4,d5,d6,d7,e1,e2,e3,e4,e5,e6,e7,f1,f2,f3,f4,f5,f6,f7;   //creating all variables used
int totalRainfall;
double totalRainfalldouble,averageRainfall;
int week1Tot, week2Tot, week3Tot, week4Tot, week5Tot, week6Tot;
int day1Tot, day2Tot, day3Tot, day4Tot, day5Tot, day6Tot, day7Tot;

scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&b1,&b2,&b3,&b4,&b5,&b6,&b7,&c1,&c2,&c3,&c4,&c5,&c6,&c7,&d1,&d2,&d3,&d4,&d5,&d6,&d7,&e1,&e2,&e3,&e4,&e5,&e6,&e7,&f1,&f2,&f3,&f4,&f5,&f6,&f7);
printf("Project #4, Mikita Popel\n\n");
printf("              Daily Rainfall    Total\n");
printf("           -------------------  -----\n");
printf("week #1:  %2d %2d %2d %2d %2d %2d %2d   %2dmm\n",a1,a2,a3,a4,a5,a6,a7,a1+a2+a3+a4+a5+a6+a7);
printf("week #2:  %2d %2d %2d %2d %2d %2d %2d   %2dmm\n",b1,b2,b3,b4,b5,b6,b7,b1+b2+b3+b4+b5+b6+b7);   //printing out the calendar/chart
printf("week #3:  %2d %2d %2d %2d %2d %2d %2d   %2dmm\n",c1,c2,c3,c4,c5,c6,c7,c1+c2+c3+c4+c5+c6+c7);
printf("week #4:  %2d %2d %2d %2d %2d %2d %2d   %2dmm\n",d1,d2,d3,d4,d5,d6,d7,d1+d2+d3+d4+d5+d6+d7);
printf("week #5:  %2d %2d %2d %2d %2d %2d %2d   %2dmm\n",e1,e2,e3,e4,e5,e6,e7,e1+e2+e3+e4+e5+e6+e7);
printf("week #6:  %2d %2d %2d %2d %2d %2d %2d   %2dmm\n\n",f1,f2,f3,f4,f5,f6,f7,f1+f2+f3+f4+f5+f6+f7);

totalRainfall = a1 + a2 + a3 + a4 + a5 + a6 + a7 + b1 + b2 + b3 + b4 + b5 + b6 + b7 + c1 + c2 + c3 + c4 + c5 + c6 + c7 + d1 + d2 + d3 + d4 + d5 + d6 + d7 + e1 + e2 + e3 + e4 + e5 + e6 + e7 + f1 + f2 + f3 + f4 + f5 + f6 + f7;
totalRainfalldouble = totalRainfall;                                                                   //calculating total rainfall
averageRainfall = totalRainfalldouble / 6;

week1Tot = a1 + a2 + a3 + a4 + a5 + a6 + a7;
week2Tot = b1 + b2 + b3 + b4 + b5 + b6 + b7;                                                           //calculating weekly totals for later
week3Tot = c1 + c2 + c3 + c4 + c5 + c6 + c7;
week4Tot = d1 + d2 + d3 + d4 + d5 + d6 + d7;
week5Tot = e1 + e2 + e3 + e4 + e5 + e6 + e7;
week6Tot = f1 + f2 + f3 + f4 + f5 + f6 + f7;

day1Tot = a1 + b1 + c1 + d1 + e1 + f1;
day2Tot = a2 + b2 + c2 + d2 + e2 + f2;                                                                 //calculating daily totals for later
day3Tot = a3 + b3 + c3 + d3 + e3 + f3;
day4Tot = a4 + b4 + c4 + d4 + e4 + f4;
day5Tot = a5 + b5 + c5 + d5 + e5 + f5;
day6Tot = a6 + b6 + c6 + d6 + e6 + f6;
day7Tot = a7 + b7 + c7 + d7 + e7 + f7;

printf("Total rainfall: %dmm (an average of %.1fmm per week)\n", totalRainfall, averageRainfall);

printf("Driest  week: ");

if (week1Tot <= week2Tot && week1Tot <= week3Tot && week1Tot <= week4Tot && week1Tot <= week5Tot && week1Tot <= week6Tot){     //calculating driest week
	printf("1");
	if (week1Tot == week2Tot)
		printf(",2");
	if (week1Tot == week3Tot)
		printf(",3");
	if (week1Tot == week4Tot)
		printf(",4");
	if (week1Tot == week5Tot)
		printf(",5");
	if (week1Tot == week6Tot)
		printf(",6");
}
else if (week2Tot <= week1Tot && week2Tot <= week3Tot && week2Tot <= week4Tot && week2Tot <= week5Tot && week2Tot <= week6Tot){
	printf("2");
	if (week2Tot == week1Tot)
		printf(",1");
	if (week2Tot == week3Tot)
		printf(",3");
	if (week2Tot == week4Tot)
		printf(",4");
	if (week2Tot == week5Tot)
		printf(",5");
	if (week2Tot == week6Tot)
		printf(",6");
}
else if (week3Tot <= week1Tot && week3Tot <= week2Tot && week3Tot <= week4Tot && week3Tot <= week5Tot && week3Tot <= week6Tot){
	printf("3");
	if (week3Tot == week1Tot)
		printf(",1");
	if (week3Tot == week2Tot)
		printf(",2");
	if (week3Tot == week4Tot)
		printf(",4");
	if (week3Tot == week5Tot)
		printf(",5");
	if (week3Tot == week6Tot)
		printf(",6");
}
else if (week4Tot <= week1Tot && week4Tot <= week2Tot && week4Tot <= week3Tot && week4Tot <= week5Tot && week4Tot <= week6Tot){
	printf("4");
	if (week4Tot == week1Tot)
		printf(",1");
	if (week4Tot == week2Tot)
		printf(",2");
	if (week4Tot == week3Tot)
		printf(",3");
	if (week4Tot == week5Tot)
		printf(",5");
	if (week4Tot == week6Tot)
		printf(",6");
}
else if (week5Tot <= week1Tot && week5Tot <= week2Tot && week5Tot <= week3Tot && week5Tot <= week4Tot && week5Tot <= week6Tot){
	printf("5");
	if (week5Tot == week1Tot)
		printf(",1");
	if (week5Tot == week2Tot)
		printf(",2");
	if (week5Tot == week3Tot)
		printf(",3");
	if (week5Tot == week4Tot)
		printf(",4");
	if (week5Tot == week6Tot)
		printf(",6");
}
else if (week6Tot <= week1Tot && week6Tot <= week2Tot && week6Tot <= week3Tot && week6Tot <= week4Tot && week6Tot <= week5Tot){
	printf("6");
	if (week6Tot == week1Tot)
		printf(",1");
	if (week6Tot == week2Tot)
		printf(",2");
	if (week6Tot == week3Tot)
		printf(",3");
	if (week6Tot == week4Tot)
		printf(",4");
	if (week6Tot == week5Tot)
		printf(",5");
}
else {
	printf("ERROR");
}

printf("\nWettest week: ");

if (week1Tot >= week2Tot && week1Tot >= week3Tot && week1Tot >= week4Tot && week1Tot >= week5Tot && week1Tot >= week6Tot){             //calculating wettest week
	printf("1");
	if (week1Tot == week2Tot)
		printf(",2");
	if (week1Tot == week3Tot)
		printf(",3");
	if (week1Tot == week4Tot)
		printf(",4");
	if (week1Tot == week5Tot)
		printf(",5");
	if (week1Tot == week6Tot)
		printf(",6");
}
else if (week2Tot >= week1Tot && week2Tot >= week3Tot && week2Tot >= week4Tot && week2Tot >= week5Tot && week2Tot >= week6Tot){
	printf("2");
	if (week2Tot == week1Tot)
		printf(",1");
	if (week2Tot == week3Tot)
		printf(",3");
	if (week2Tot == week4Tot)
		printf(",4");
	if (week2Tot == week5Tot)
		printf(",5");
	if (week2Tot == week6Tot)
		printf(",6");
}
else if (week3Tot >= week1Tot && week3Tot >= week2Tot && week3Tot >= week4Tot && week3Tot >= week5Tot && week3Tot >= week6Tot){
	printf("3");
	if (week3Tot == week1Tot)
		printf(",1");
	if (week3Tot == week2Tot)
		printf(",2");
	if (week3Tot == week4Tot)
		printf(",4");
	if (week3Tot == week5Tot)
		printf(",5");
	if (week3Tot == week6Tot)
		printf(",6");
}
else if (week4Tot >= week1Tot && week4Tot >= week2Tot && week4Tot >= week3Tot && week4Tot >= week5Tot && week4Tot >= week6Tot){
	printf("4");
	if (week4Tot == week1Tot)
		printf(",1");
	if (week4Tot == week2Tot)
		printf(",2");
	if (week4Tot == week3Tot)
		printf(",3");
	if (week4Tot == week5Tot)
		printf(",5");
	if (week4Tot == week6Tot)
		printf(",6");
}
else if (week5Tot >= week1Tot && week5Tot >= week2Tot && week5Tot >= week3Tot && week5Tot >= week4Tot && week5Tot >= week6Tot){
	printf("5");
	if (week5Tot == week1Tot)
		printf(",1");
	if (week5Tot == week2Tot)
		printf(",2");
	if (week5Tot == week3Tot)
		printf(",3");
	if (week5Tot == week4Tot)
		printf(",4");
	if (week5Tot == week6Tot)
		printf(",6");
}
else if (week6Tot >= week1Tot && week6Tot >= week2Tot && week6Tot >= week3Tot && week6Tot >= week4Tot && week6Tot >= week5Tot){
	printf("6");
	if (week6Tot == week1Tot)
		printf(",1");
	if (week6Tot == week2Tot)
		printf(",2");
	if (week6Tot == week3Tot)
		printf(",3");
	if (week6Tot == week4Tot)
		printf(",4");
	if (week6Tot == week5Tot)
		printf(",5");
}
else {
	printf("ERROR");
}

 printf("\nTotal rainfall on driest  day of week: ");
 
 if (day1Tot <= day2Tot && day1Tot <= day3Tot && day1Tot <= day4Tot && day1Tot <= day5Tot && day1Tot <= day6Tot && day1Tot <= day7Tot){     //calculating total rainfall on driest day of week
	printf("%dmm (on Sunday", day1Tot);
	if (day1Tot == day2Tot)
		printf(",Monday");
	if (day1Tot == day3Tot)
		printf(",Tuesday");
	if (day1Tot == day4Tot)
		printf(",Wednesday");
	if (day1Tot == day5Tot)
		printf(",Thursday");
	if (day1Tot == day6Tot)
		printf(",Friday");
	if (day1Tot == day7Tot)
		printf(",Saturday");
 }
 else if (day2Tot <= day1Tot && day2Tot <= day3Tot && day2Tot <= day4Tot && day2Tot <= day5Tot && day2Tot <= day6Tot && day2Tot <= day7Tot){
	printf("%dmm (on Monday", day2Tot);
	if (day2Tot == day1Tot)
		printf(",Sunday");
	if (day2Tot == day3Tot)
		printf(",Tuesday");
	if (day2Tot == day4Tot)
		printf(",Wednesday");
	if (day2Tot == day5Tot)
		printf(",Thursday");
	if (day2Tot == day6Tot)
		printf(",Friday");
	if (day2Tot == day7Tot)
		printf(",Saturday");
 }
 else if (day3Tot <= day1Tot && day3Tot <= day2Tot && day3Tot <= day4Tot && day3Tot <= day5Tot && day3Tot <= day6Tot && day3Tot <= day7Tot){
	printf("%dmm (on Tuesday", day3Tot);
	if (day3Tot == day1Tot)
		printf(",Sunday");
	if (day3Tot == day2Tot)
		printf(",Monday");
	if (day3Tot == day4Tot)
		printf(",Wednesday");
	if (day3Tot == day5Tot)
		printf(",Thursday");
	if (day3Tot == day6Tot)
		printf(",Friday");
	if (day3Tot == day7Tot)
		printf(",Saturday");
 }
 else if (day4Tot <= day1Tot && day4Tot <= day2Tot && day4Tot <= day3Tot && day4Tot <= day5Tot && day4Tot <= day6Tot && day4Tot <= day7Tot){
	printf("%dmm (on Wednesday", day4Tot);
	if (day4Tot == day1Tot)
		printf(",Sunday");
	if (day4Tot == day2Tot)
		printf(",Monday");
	if (day4Tot == day3Tot)
		printf(",Tuesday");
	if (day4Tot == day5Tot)
		printf(",Thursday");
	if (day4Tot == day6Tot)
		printf(",Friday");
	if (day4Tot == day7Tot)
		printf(",Saturday");
 }
 else if (day5Tot <= day1Tot && day5Tot <= day2Tot && day5Tot <= day3Tot && day5Tot <= day4Tot && day5Tot <= day6Tot && day5Tot <= day7Tot){
	printf("%dmm (on Thursday", day5Tot);
	if (day5Tot == day1Tot)
		printf(",Sunday");
	if (day5Tot == day2Tot)
		printf(",Monday");
	if (day5Tot == day3Tot)
		printf(",Tuesday");
	if (day5Tot == day4Tot)
		printf(",Wednesday");
	if (day5Tot == day6Tot)
		printf(",Friday");
	if (day5Tot == day7Tot)
		printf(",Saturday");
 }
 else if (day6Tot <= day1Tot && day6Tot <= day2Tot && day6Tot <= day3Tot && day6Tot <= day4Tot && day6Tot <= day5Tot && day6Tot <= day7Tot){
	printf("%dmm (on Friday", day6Tot);
	if (day6Tot == day1Tot)
		printf(",Sunday");
	if (day6Tot == day2Tot)
		printf(",Monday");
	if (day6Tot == day3Tot)
		printf(",Tuesday");
	if (day6Tot == day4Tot)
		printf(",Wednesday");
	if (day6Tot == day5Tot)
		printf(",Thursday");
	if (day6Tot == day7Tot)
		printf(",Saturday");
 }
 else if (day7Tot <= day1Tot && day7Tot <= day2Tot && day7Tot <= day3Tot && day7Tot <= day4Tot && day7Tot <= day5Tot && day7Tot <= day6Tot){
	printf("%dmm (on Saturday", day7Tot);
	if (day7Tot == day1Tot)
		printf(",Sunday");
	if (day7Tot == day2Tot)
		printf(",Monday");
	if (day7Tot == day3Tot)
		printf(",Tuesday");
	if (day7Tot == day4Tot)
		printf(",Wednesday");
	if (day7Tot == day5Tot)
		printf(",Thursday");
	if (day7Tot == day6Tot)
		printf(",Friday");
 }
 else {
	 printf("ERROR");
 }
 
 printf(")\nTotal rainfall on wettest day of week: ");
 
 if (day1Tot >= day2Tot && day1Tot >= day3Tot && day1Tot >= day4Tot && day1Tot >= day5Tot && day1Tot >= day6Tot && day1Tot >= day7Tot){   //calculating total rainfall on wettest day of week
	printf("%dmm (on Sunday", day1Tot);
	if (day1Tot == day2Tot)
		printf(",Monday");
	if (day1Tot == day3Tot)
		printf(",Tuesday");
	if (day1Tot == day4Tot)
		printf(",Wednesday");
	if (day1Tot == day5Tot)
		printf(",Thursday");
	if (day1Tot == day6Tot)
		printf(",Friday");
	if (day1Tot == day7Tot)
		printf(",Saturday");
 }
 else if (day2Tot >= day1Tot && day2Tot >= day3Tot && day2Tot >= day4Tot && day2Tot >= day5Tot && day2Tot >= day6Tot && day2Tot >= day7Tot){
	printf("%dmm (on Monday", day2Tot);
	if (day2Tot == day1Tot)
		printf(",Sunday");
	if (day2Tot == day3Tot)
		printf(",Tuesday");
	if (day2Tot == day4Tot)
		printf(",Wednesday");
	if (day2Tot == day5Tot)
		printf(",Thursday");
	if (day2Tot == day6Tot)
		printf(",Friday");
	if (day2Tot == day7Tot)
		printf(",Saturday");
 }
 else if (day3Tot >= day1Tot && day3Tot >= day2Tot && day3Tot >= day4Tot && day3Tot >= day5Tot && day3Tot >= day6Tot && day3Tot >= day7Tot){
	printf("%dmm (on Tuesday", day3Tot);
	if (day3Tot == day1Tot)
		printf(",Sunday");
	if (day3Tot == day2Tot)
		printf(",Monday");
	if (day3Tot == day4Tot)
		printf(",Wednesday");
	if (day3Tot == day5Tot)
		printf(",Thursday");
	if (day3Tot == day6Tot)
		printf(",Friday");
	if (day3Tot == day7Tot)
		printf(",Saturday");
 }
 else if (day4Tot >= day1Tot && day4Tot >= day2Tot && day4Tot >= day3Tot && day4Tot >= day5Tot && day4Tot >= day6Tot && day4Tot >= day7Tot){
	printf("%dmm (on Wednesday", day4Tot);
	if (day4Tot == day1Tot)
		printf(",Sunday");
	if (day4Tot == day2Tot)
		printf(",Monday");
	if (day4Tot == day3Tot)
		printf(",Tuesday");
	if (day4Tot == day5Tot)
		printf(",Thursday");
	if (day4Tot == day6Tot)
		printf(",Friday");
	if (day4Tot == day7Tot)
		printf(",Saturday");
 }
 else if (day5Tot >= day1Tot && day5Tot >= day2Tot && day5Tot >= day3Tot && day5Tot >= day4Tot && day5Tot >= day6Tot && day5Tot >= day7Tot){
	printf("%dmm (on Thursday", day5Tot);
	if (day5Tot == day1Tot)
		printf(",Sunday");
	if (day5Tot == day2Tot)
		printf(",Monday");
	if (day5Tot == day3Tot)
		printf(",Tuesday");
	if (day5Tot == day4Tot)
		printf(",Wednesday");
	if (day5Tot == day6Tot)
		printf(",Friday");
	if (day5Tot == day7Tot)
		printf(",Saturday");
 }
 else if (day6Tot >= day1Tot && day6Tot >= day2Tot && day6Tot >= day3Tot && day6Tot >= day4Tot && day6Tot >= day5Tot && day6Tot >= day7Tot){
	printf("%dmm (on Friday", day6Tot);
	if (day6Tot == day1Tot)
		printf(",Sunday");
	if (day6Tot == day2Tot)
		printf(",Monday");
	if (day6Tot == day3Tot)
		printf(",Tuesday");
	if (day6Tot == day4Tot)
		printf(",Wednesday");
	if (day6Tot == day5Tot)
		printf(",Thursday");
	if (day6Tot == day7Tot)
		printf(",Saturday");
 }
 else if (day7Tot >= day1Tot && day7Tot >= day2Tot && day7Tot >= day3Tot && day7Tot >= day4Tot && day7Tot >= day5Tot && day7Tot >= day6Tot){
	printf("%dmm (on Saturday", day7Tot);
	if (day7Tot == day1Tot)
		printf(",Sunday");
	if (day7Tot == day2Tot)
		printf(",Monday");
	if (day7Tot == day3Tot)
		printf(",Tuesday");
	if (day7Tot == day4Tot)
		printf(",Wednesday");
	if (day7Tot == day5Tot)
		printf(",Thursday");
	if (day7Tot == day6Tot)
		printf(",Friday");
 }
 else {
	 printf("ERROR");
 }
 
 printf(")");
 
return 0;
}
