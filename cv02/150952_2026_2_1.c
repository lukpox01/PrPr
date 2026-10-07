#include <stdio.h>

int main() {
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    float average = (x + y + z) / 3;
    printf("Priemer cisel %g %g %g je %g\n", x,y,z,average);
    return 0;
}
