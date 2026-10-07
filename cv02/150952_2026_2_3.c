#include <stdio.h>

int main() {
    float num;

    scanf("%f", &num);

    int int_part = (int)num;
    float frac_part = num - int_part;

    if (frac_part >= .5f){
        int_part++;
    }

    printf("%d %d\n", (int)num, int_part);

}