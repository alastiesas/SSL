#include "Conversion.h"

double Celsius (int fahr){ // recibe fahrenheit, devuelve celsius
	return ((5.0/9.0) * (fahr-32.0));
}

double Fahrenheit (int cel){ // recibe celsius, devuelve fahrenheit
	return ((9.0/5.0)*cel+32);
}
