#include<sys/timeb.h>
#include <string.h>
#include <stdio.h>
//#include "func.h"

/*******************
Michal Chorobik
0937145
Assignment 1
September 26, 2016
*******************/

void flip(char *str, int start, int end);
double acker (double m,double n);
double sqt (double num,double e,double a);
double sqt2 (double num,double e,double a);

//this function takes in numerous numbers in order to snd them to different functions to be calculated. it also prints out the results of those calculations and compares the results in one case
int main(){

//carbon
printf("\n***** Carbon *****\n\n");

  char str[] = "carbon";
  int a = strlen(str);
  flip(str, 0, a-1);

//ackermans func
printf("\n***** Ackermann’s function *****\n\n");

  double m,n;
  printf("enter m\n");
  scanf("%lf",&m);
  printf("enter n\n");
  scanf("%lf",&n);
  printf("answer is %lf\n",acker(m,n));

//newton
  printf("\n*****  Newton’s method *****\n\n");

  struct timeb start, end;
      int diff1,diff2;
      int i = 0;

  double num,e;
  printf("enter the number you want to get a square root of\n");
  scanf("%lf",&num);
  printf("enter the number representing the acuracy of the answer\n");
  scanf("%lf",&e);

  printf("\nrecursive function results:");
  ftime(&start);
  printf("\nyour answer is %lf \n",sqt(num,e,num/2));
  ftime(&end);
  diff1 = (int) (1000.0 * (end.time - start.time)
      + (end.millitm - start.millitm));
  printf("Operation took %d milliseconds for the recursive function\n", diff1);

  printf("\nnon-recursive function results:");
  ftime(&start);
  printf("\nyour answer is %lf \n",sqt2(num,e,num/2));
  ftime(&end);
  diff2 = (int) (1000.0 * (end.time - start.time)
      + (end.millitm - start.millitm));
  printf("Operation took %d milliseconds for the non-recursive function \n\n", diff2);

  if(diff2>diff1){
    printf("recursive function was faster by %d milliseconds\n", diff2-diff1);
  }else if(diff2<diff1){
    printf("non-recursive function was faster by %d milliseconds\n", diff1-diff2);
  }else{
    printf("recursive and non-recursive function took the same amount of time\n");

  }

  return 0;

}
