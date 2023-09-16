#include<stdio.h>
#include<string.h>
int main(){
    int r,sum=0,n,temp;
    printf("enter the number :" );
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==temp){printf("plaindrome");}
    else{printf("not");}
    return 0;

}