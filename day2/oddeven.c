#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n;
    printf(" Enter the number : ");
    scanf("%d",&n);
    if (n%2==0){
        printf("%d is even",n);
    }
    else{
        printf("%d is odd",n);
    }
}