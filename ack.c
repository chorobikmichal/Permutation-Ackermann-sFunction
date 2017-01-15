#include <stdio.h>

/*******************
Michal Chorobik
0937145
Assignment 1
September 26, 2016
*******************/

//This function applyes the Ackerman's function to the two numbers given by the user and passed to it by main
double acker (double m,double n){

  if((m>0)&&(n>0)){
    return (acker(m-1,(acker(m,n-1))));
  } else if ((m>0)&&(n==0)){
    return (acker(m-1,1));
  } else if (m==0){
    return(n+1);
  }

}
