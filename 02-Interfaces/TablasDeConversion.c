#include <stdio.h>
#include "Conversion.h"

void PrintTablas (int MIN, int MAX, int ESC);
void PrintTablaFahrenheit(int MIN, int MAX, int ESC);
void PrintTablaCelcius(int MIN, int MAX, int c);
void PrintFilas (int MIN,int MAX,int ESC,int a,int b,double(*f)(int));
void PrintFila (int a,int b,int x, double(*f)(int));


int main(void) {
	const int	MIN = 0, // limite minimo tabla
		        MAX = 300, // limite maximo tabla
			    ESC = 20; // escala salto
	
	PrintTablas(MIN,MAX,ESC);

	return 0;
}



void PrintTablas (int MIN, int MAX, int ESC){

    printf("Fahrenheit a Celsius\n");
	PrintTablaFahrenheit (MIN,MAX,ESC);

	printf("\n\nCelsius a Fahrenheit\n");
	PrintTablaCelcius (MIN,MAX,ESC);

}

void PrintTablaFahrenheit(int MIN, int MAX, int ESC){

	
	int f=70;
	int c=67; 

	PrintFilas(MIN,MAX,ESC,c,f,&Celsius);
}

void PrintTablaCelcius (int MIN, int MAX, int ESC){

	
	int f=70;
	int c=67;

	PrintFilas (MIN,MAX,ESC,f,c,&Fahrenheit);
}

void PrintFilas (int MIN,int MAX,int ESC,int a,int b,double(*f)(int)){

	int x;

	for (x = MIN; x <= MAX; x = x + ESC){
		PrintFila(a,b,x,&(*f));
	}
}


void PrintFila(int a,int b,int x, double(*f)(int)){

	printf("%3d %c° =%6.1f %c°\n", x, a, (*f)(x), b);
}

