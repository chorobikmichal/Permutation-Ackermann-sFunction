#include <stdio.h>
#include <math.h>

/*******************
Michal Chorobik
0937145
Assignment 1
September 26, 2016
*******************/

//this function is called from main. It recieves the number that the user wants to get teh square root of amd the number of how accurate the answer should be.
//The thirs number it reciave is the accuracy number divided by two as it is the first step of applying the Newton's method.
double sqt2 (double num,double e,double a){

while(!((fabs(a*a-num))<=e)){
  a=(a+num/a)/2;
  }
  return(a);

}
