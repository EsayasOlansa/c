#include <stdio.h>
#include <math.h>

int main(){
    float area = 0.0f;
    float surfarea = 0.0f;
    float radius = 0.0f;
    float pi =3.14;
    float volume = 0.0f;

    printf("-----------------\n");
    printf("Enter radius[to check area, surface area, volume] ");
    scanf("%f",&radius);
    printf("-----------------");

    area= pi*pow(radius,2);
    surfarea=4*pi*pow(radius,2);
    volume=4/3 *pi*pow(radius,3);

    printf("-----------------\n");
    printf("Area For radius %.3f: %.3f\n", radius, area);
    printf("Surface area for radius %.3f: %.3f\n", radius, surfarea);
    printf("volume of radius %.3f: %.3f\n", radius, volume);

    return 0;
}