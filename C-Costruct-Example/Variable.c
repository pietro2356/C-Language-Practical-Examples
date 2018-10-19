#include <stdio.h>

int integer = 5;
double virgola = 1.5;
float floating = 512.56;
char c = 'c';

int main(){
	printf("Variabile intera >> %d\r\n", integer);
	printf("Variabile a virgola mobile >> %f\r\n", virgola);
	printf("Variabile a virgola mobile >> %f\r\n", floating);
	printf("Variabile di tipo carattere >> %d\r\n", c);
	
	return 0;
}