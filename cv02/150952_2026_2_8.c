#include <stdio.h>

int main () {
    int N;
    scanf("%d", &N);
    float nums[N];
    for (int i = 0; i < N; i++) {
        scanf("%f", &nums[i]);
    }

    float min = nums[0];
    float max = nums[0];

    for (int i = 1; i < N; i++) {
        if (nums[i] > max) {
            max = nums[i];
        } else if (nums[i] < min) {
            min = nums[i];
        }
    }

    printf("Maximum: %g\n", max);
    printf("Minimum: %g\n", min);
    return 0;
}
