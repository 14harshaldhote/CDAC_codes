// 1
// 2
// 5
// 10
// 50
// 100

// = 650  min
#include <stdio.h>

void calculateDenominations(int amount) {
    int denominations[] = {100, 50, 10, 5, 2, 1};
    int counts[6] = {0};

    printf("Amount: %d\n", amount);
    printf("Denominations:\n");

    for (int i = 0; i < 6; i++) {
        while (amount >= denominations[i]) {
            counts[i]++;
            amount -= denominations[i];
        }

        if (counts[i] > 0) {
            printf("%d x %d\n", counts[i], denominations[i]);
        }
    }
}

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    calculateDenominations(amount);

    return 0;
}
