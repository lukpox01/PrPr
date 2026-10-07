#include <stdio.h>

int main() {
    double r;
    const double pi = 3.14;

    scanf("%lf", &r);

    printf("Obvod kruhu s polomerom %.0f je: %.2f\n", r, 2 * pi * r);
    return 0;
}
