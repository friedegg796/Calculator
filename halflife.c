// Halflife, shrimple as that
#include<stdio.h>
#include<math.h>


int main(void){
do {
 long double x, y; // our two variables that are calculated
 // x is inital, y is number of halflives
 char yorn; // yes or no
 do{
  printf("First number x goes through Y halflives");
  scanf( "%Lf %Lf", x, y);
  while (getchar(!= '\n'));
 }while (!(x > 0 || y > 0));
printf("Wanna go on?\n");
scanf( "c", yorn);
} while( *yorn == 'y'|| *yorn == 'Y');
}