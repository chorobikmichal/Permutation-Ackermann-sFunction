#include <stdio.h>

/*******************
Michal Chorobik
0937145
Assignment 1
September 26, 2016
*******************/

//This function once called by main uses a recurssive function to acramble the letters c,a,r,b,o and n in every possible way while not reusing the letter more than once each time
void flip(char *str, int start, int end){
   int i;
   char temp;

   if (start==end)
     printf("%s\n",str);
   else
   {
       for (i=start; i<=end;i++)
       {
          temp = str[start];
          str[start] = str[i];
          str[i]= temp;
          flip(str, start+1, end);
          temp = str[start];
          str[start] = str[i];
          str[i]= temp;       }
   }
}
