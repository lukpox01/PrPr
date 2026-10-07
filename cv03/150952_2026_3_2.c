#include <stdio.h>

int main() {
    int n;
    do {
        scanf("%d", &n);
    } while (n <= 0);

    for (int i=n; i>1; i--) {
        n = n*(i-1);
    };
    printf("%d\n", n);
}
