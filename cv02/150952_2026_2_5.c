#include <stdio.h>

int main() {

    int a;
    int b;
    char ch;

    scanf("%d %d %c", &a, &b, &ch);
    int result =0;
    if (ch == '+') {
        result = a + b;
    } else if (ch == '-') {
        result = a - b;
    } else if (ch == '*') {
        result = a * b;
    } else if (ch == '/') {
        result = a / b;
    }
    printf("%d %c %d = %d\n", a,ch,b,result);

}