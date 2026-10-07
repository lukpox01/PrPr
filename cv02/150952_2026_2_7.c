#include <stdio.h>

// Zdôvodneneie: proste som prekopiroval zadanie sem a funguje to
// vstupy sa musia vziat 2x kôli b++, ... operaciam ktore menia hodnotu premennej

int main() {
    int a,b,c,d,e;

    scanf("%d %d %d %d %d\n", &a,&b,&c,&d,&e);
    int result1 = e / --a * b++ / c++;

    printf("%d \n", result1);

    scanf("%d %d %d %d %d\n", &a,&b,&c,&d,&e);
    int result2 = a %= b = d = 1 + e / 2;

    printf("%d\n", result2);
    return 0;
}
