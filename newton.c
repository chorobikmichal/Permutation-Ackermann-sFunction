#include <stdio.h>
#include <math.h>

double sqt (double num,double e,double a){

  if((fabs(a*a-num))<=e){
    return(a);
  } else {
    return sqt(num,e,((a+num/a)/2));
  }

}
