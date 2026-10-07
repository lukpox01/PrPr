#include <stdio.h>

void mocnina(double x, int n) {
    double y = 1.0;
    for (int i = 1; i <= n; i++) {
        y *= x;
        printf("%.2f^%d = %.2f\n", x, i, y);
    }
}

int main() {
    double x;
    int n;

    if (scanf("%lf %d", &x, &n) != 2) {
        return 0;
    }

    mocnina(x, n);
    return 0;
}
