#include <stdio.h>

int main () {
    char a, b;

    scanf("%c %c", &a, &b);

    int ascii_a = (int)a;
    int ascii_b = (int)b;

    printf("%c %d\n", (char)ascii_a-32, ascii_a-32);
    printf("%c %d", (char)ascii_b-32, ascii_b-32);
}