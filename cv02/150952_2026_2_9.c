#include <stdio.h>

int main() {
    int nums[11];
    int i;
    int correct = 1;

    for (i = 0; i < 11; i++) {
        scanf("%d", &nums[i]);
    }

    if (nums[0] < 0 || nums[0] > 10) {
        correct = 0;
    }

    for (i = 1; i < 11 && correct; i++) {
        if (nums[i] > nums[i - 1] * 2 || nums[i] < nums[i - 1] / 2.0) {
            correct = 0;
        }
    }

    if (correct) {
        printf("Postupnost je spravna\n");
    } else {
        printf("Postupnost nie je spravna\n");
    }

    return 0;
}
