#include<stdio.h>
int main()
{
    int n=6;
    int fact=1;
    for(int i =2; i <= n; i++){
        fact = fact * i;
    }
    printf(" %d ", fact);
}