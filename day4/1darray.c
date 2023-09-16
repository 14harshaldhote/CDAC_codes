#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sum( int A[], int n){
    int sum=0;
    for(int i=0; i<=n;i++){
        sum=sum+A[i];
    }
    printf(" %d",sum);
}
int main() {
    
    int n;
    scanf("%d",&n);
    int *A = (int *)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    sum(A, n);
/* Enter your code here. Read input from STDIN. Print output to STDOUT */     
    return 0;
}
