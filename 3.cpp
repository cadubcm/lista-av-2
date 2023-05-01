#include <stdio.h>
#include <math.h>

#define pi 3.14159

int main(void) {
    float r;
    printf("Insira o raio: \n");
    scanf("%f", &r);

    const float VOLUME = (4.0/3)*pi*pow(r,3);
    const float AREA = 4*pi*pow(r,2);

    printf("A area da superficie e: %.2f \n", AREA);
    printf("O volume da esfera e: %.2f \n", VOLUME);

    return 0;
}
