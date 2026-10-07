#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int correct = 0;
    int tmp;
    for (int i = 0; i<N; i++) {
        scanf("%d", &tmp);

        if (tmp > 0 & tmp < 100) {
            correct++;
        }
    }
    printf("%d\n", correct);


}
