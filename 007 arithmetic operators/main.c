#include <stdio.h>
#include <stdlib.h>

int main(){
	char a;
	int b, x, w, resto, resto2;
	
	a = '2';
	b = 12;
	x = -b;
	w = 2 * b;
	resto = 9 % 2; //resto igual a 1
	resto2 = 9 % 5; //resto igual a 4  

	printf("a: %c", a);
	printf("\nnew b: %d", b);
	printf("\nb: %d", x);
	printf("\nmult w: %d", w);
	printf("\nresto 9/2: %d", resto);
	printf("\nresto 9/5 e: %d", resto2);
	
	

	system("pause");
	return 0;	

}
