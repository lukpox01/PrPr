#include <stdio.h>

int main(void) {
    int cas;
    int hours, minutes;

    scanf("%d", &cas);

    hours = cas / 100;
    minutes = cas % 100;

    printf("Hodiny: %d\n", hours);
    printf("Minuty: %d\n", minutes);

    printf("Cas %d zodpoveda hodine %d a minute: %d\n", cas, hours, minutes);

    getchar();
}
