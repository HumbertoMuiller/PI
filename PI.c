#include <stdio.h>
#include <math.h>                         //bibliotecas

double pi (void);

int main (void){

	printf("%f\n", pi());

}
		double pi (void){

		double pi = 0, area, p;    //variaveis
		int x;

		for (x = 0; x <= 1000; x++){

		area= pow(-1,x) / (2*x+1); //calculos das areas
		area*=4; 
		p=pi;                      //variavel da divisão do quadrado e do ciculo
		pi=p+area;
	}

	return  pi;

}
