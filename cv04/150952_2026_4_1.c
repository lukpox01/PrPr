#include <stdio.h>

int zisti_prvocislo(int cislo) {
    if (cislo < 2) {
        return -1;
    }
    for (int i = 2; i * i <= cislo; i++) {
        if (cislo % i == 0) {
            return -1;
        }
    }
    return 1;
}

int main() {

    int x, y;

    scanf("%d %d", &x, &y);

    for (int i = x; i <= y; i++) {
        if (zisti_prvocislo(i)>0) {
            printf("%d\n", i);
        }
    }


    return 0;
}