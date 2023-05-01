#include <stdio.h>

int main(void){
	int x,y;
	
	printf("Insira o valor de X: \n");
	scanf("%d", &x);
	printf("Insira o valor de Y: \n");
	scanf("%d", &y);
	
	if((x>0)&&(y>0)){
		printf("Quadrante 1 \n");
	}
	if((x<0)&&(y>0)){
		printf("Quadrante 2 \n");
	}
	if((y<0)&&(x<0)){
		printf("Quadrante 3 \n");
	}
	if((y<0)&&(x>0)){
		printf("Quadrante 4 \n");
	}
	
	if((x == 0) && (y == 0)){
		printf("Origem \n");
	}
	else if((x == 0) && (y != 0)){
		printf("Eixo Y \n");
	}
	else if((x != 0) && (y == 0)){
		printf("Eixo X \n");
	}
	
	return 0;
}
