#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d", &x, &y);

    int zvysokx = x % 3 == 0 ? 0 : 3 - (x % 3);
    int zvysoky = x % 3 == 0 ? 0 : 3 - (x % 3);
    x= x+zvysokx;
    y= y-zvysoky;

    for (int i = x; i<=y; i=i+3) {
        printf("%d ", i);
    }


}
