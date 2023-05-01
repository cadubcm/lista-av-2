#include <stdio.h>
#include <math.h>

int main(void){
	float x1, y1, x2, y2, dist;
	
	printf("Insira a coordenada do valor x1: \n");
	scanf("%f", &x1);
	printf("Insira a coordenada do valor y1: \n");
	scanf("%f", &y1);
	printf("Insira a coordenada do valor x2: \n");
	scanf("%f", &x2);
	printf("Insira a coordenada do valor y2: \n");
	scanf("%f", &y2);
	
	dist = sqrt(pow((x2 - x1), 2)+ pow((y2 - y1), 2));
	
	printf("A distancia e: %.4f", dist);
	
	return 0;
}
