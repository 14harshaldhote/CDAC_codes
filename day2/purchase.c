#include<stdio.h>
int main(){
    int n;
    printf("Welcom \n Enter your pUrchased amount :");
    scanf("%d",&n);
    if (n>=1500){
        n=n-200;
        printf("%d",n);
    }
    else{printf("You are not eligible for discount");}
}