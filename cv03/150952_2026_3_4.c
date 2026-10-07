#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1 || n > 15) {
        printf("Cislo nie je z daneho intervalu\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        printf("%2d:", i);
        for (int j = n - i + 1; j >= 1; j--) {
            printf(" %2d", j);
        }
        printf("\n");
    }

    return 0;
}