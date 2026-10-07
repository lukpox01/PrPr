#include <stdio.h>

int main() {
    int a;
    int b;
    char ch;

    scanf("%d %d %c", &a, &b, &ch);
    int result = 0;
    switch (ch) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("Zle zadana volba.");
            return 0;
    }

    printf("%d %c %d = %d\n", a,ch,b,result);
    return 0;

}