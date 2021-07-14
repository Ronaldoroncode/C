/*Duas formas de declarar constantes, pelo const ou define*/
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415 //ao copilar, subistitue o nome da constante pelo seu valor em todo o código.

int main(){

	const float f = PI + 1; //ao copilar, cria um local reservado na memoria.

	system("pause");
	return 0;

}
