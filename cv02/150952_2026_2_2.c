#include <stdio.h>

int main() {

    float height, weight;

    scanf("%f %f", &height, &weight);
    height = height / 100;

    float bmi = weight / (height * height);
    printf("BMI: %g\n", bmi);
    return 0;
}
