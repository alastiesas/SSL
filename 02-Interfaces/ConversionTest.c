#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include "Conversion.h"

bool casiigual(double a,double b, double c);

int main(){

  assert (casiigual (-17.8,Celsius(0),0.01));
  assert (casiigual (26.7,Celsius(80),0.01));
  assert (casiigual (93.3,Celsius(200),0.01));
  assert (casiigual (32.0,Fahrenheit(0),0.01));
  assert (casiigual (356.0,Fahrenheit(180),0.01));
  assert (casiigual (500.0,Fahrenheit(260),0.01));
  
   return 0;
}


bool casiigual (double a,double b, double c){

    double f = abs (a-b);
    bool r = (c>=f);

    return r;
}
