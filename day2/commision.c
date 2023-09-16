#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int amount, n;
    scanf("%d",&amount);
    if(amount>1000){
        n=amount*(0.15);
        printf("%d\n",n);
    }
    else{
        printf("No commision\n");
}}