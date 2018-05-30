#include <stdio.h>
#include "Conversion.h"

void PrintTablas (void);
void PrintTablaFahrenheit(void);
void PrintTablaCelcius(void);
void PrintFilas (int a,int b,double(*f)(double));
void PrintFila (int a,int b,double x, double(*f)(double));

const double	MIN = 0, // limite minimo tabla
		            MAX = 300, // limite maximo tabla
			        ESC = 20; // escala salto

int main(void) {
	
	
	PrintTablas();

	return 0;
}



void PrintTablas (void){

    printf("Fahrenheit a Celsius\n");
	PrintTablaFahrenheit ();

	printf("\n\nCelsius a Fahrenheit\n");
	PrintTablaCelcius ();

}

void PrintTablaFahrenheit(void){

	
	int f=70;
	int c=67; 

	PrintFilas(c,f,&Celsius);
}

void PrintTablaCelcius (void){

	
	int f=70;
	int c=67;

	PrintFilas (f,c,&Fahrenheit);
}

void PrintFilas (int a,int b,double(*f)(double)){

	double x;

	for (x = MIN; x <= MAX; x = x + ESC){
		PrintFila(a,b,x,&(*f));
	}
}


void PrintFila(int a,int b,double x, double(*f)(double)){

	printf("%3.0f %c° =%6.1f %c°\n", x, a, (*f)(x), b);
}

