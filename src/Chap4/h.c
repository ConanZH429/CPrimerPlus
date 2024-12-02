#include <stdio.h>

#define GALLON2L 3.785
#define MILE2KM 1.609


int main(void)
{
    float mileage, fuel_cons;
    printf("Please enter your mileage(mile): ");
    scanf("%f", &mileage);
    printf("Please enter your fuel_consumption(gallon): ");
    scanf("%f", &fuel_cons);

    float mile_per_gallon = mileage / fuel_cons;
    float L_per_km = fuel_cons * GALLON2L / (mileage * MILE2KM / 100);

    printf("Mile/Gallon: %f\n", mile_per_gallon);
    printf("L/100km: %f\n", L_per_km);

    return 0;
}