//                             // 4 4 4 4 4 4 4  
//                             // 4 3 3 3 3 3 4   
//                             // 4 3 2 2 2 3 4   
//                             // 4 3 2 1 2 3 4   
//                             // 4 3 2 2 2 3 4   
//                             // 4 3 3 3 3 3 4   
//                             // 4 4 4 4 4 4 4  
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {

//     int n;
//     scanf("%d", &n);
//   	// Complete the code to print the pattern.
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n*i; j++){
//             if()
//             printf(" %d\n", j);
//     }
//     }
//     return 0;
// }
#include <stdio.h>

void concentricPatternSquare(int n) {
    int size = 2 * n - 1;
    int i, j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            int min = i;
            if (min > j) {
                min = j;
            }
            if (min > size - i - 1) {
                min = size - i - 1;
            }
            if (min > size - j - 1) {
                min = size - j - 1;
            }
            printf("%d ", n - min);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    concentricPatternSquare(n);

    return 0;
}
