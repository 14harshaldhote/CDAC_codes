#include<stdio.h>
int main(){
    int num=153,sum,r,m;
    int temp=num;
    
    while(temp!=0){
        r=temp%10;
        m=r*r*r;
        sum=sum+m;
        temp=temp/10;
    }
    if(num==sum){
        printf("yes it is");
    }else{printf("no its not");}
    
}
