#include <stdio.h>

int main(void)
{
    double water_weight = 3.0e-23;
    double quantum;
    int weight_per_quantum = 950;
    scanf("%lf", &quantum);
    double water_num = (quantum * weight_per_quantum) / water_weight;

    printf("%.2e\n", water_num);
    
    return 0;
}