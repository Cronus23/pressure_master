#include <stdio.h>
#include <math.h>


double fToK(double fahrenheit) {

return (fahrenheit - 32) * 5.0/9.0 + 273.15;

}

double calcInPressure(double tempInside, double tempOut, double outPressure){

return outPressure / fToK(tempOut) * fToK(tempInside) ;
}


int main(void) {
double tempInside;
double tempOut;
double r=8.31446261815324; //Ideal gas constant
double outPressure;



printf("Hello World\n");
printf("Temp inside: ");
scanf("%lf", &tempInside);

printf("Temp outside: "); 
scanf("%lf", &tempOut);

printf("Temp Inside: %lf\n", tempInside);
printf("Temp Outside: %lf\n", tempOut);

printf("What should be the pressure outside? ");
scanf("%lf", &outPressure);


double idealPressure = calcInPressure(tempInside, tempOut, outPressure);

printf("Pump tire to: %lf\n", idealPressure);

}


