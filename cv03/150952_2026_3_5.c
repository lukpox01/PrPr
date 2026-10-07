#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) {
        printf("Zly vstup");
        return 0;
    }

    if (N < 1 || N > 15 || N % 2 == 0) {
        printf("Zly vstup");
        return 0;
    }

    int mid = N / 2;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i + j == N - 1 || i == mid || j == mid) {
                putchar('*');
            } else {
                putchar('-');
            }
        }
        putchar('\n');
    }

    return 0;
}
