#include <stdio.h>

void calculateDenominations(int amount) {
    int denominations[] = {100, 50, 10, 5, 2, 1};//coins    //yen = n 
    int counts[6] = {0};//count of amount in multiple of denominations

    printf("Amount: %d\n", amount);
    printf("Denominations:\n");

    for (int i = 0; i < 6; i++) {
        if (amount >= denominations[i]) {
            counts[i] = amount / denominations[i];
            amount = amount % denominations[i];
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
