#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
int main(){
    int a;
    printf("Enter the number you want to check the condintion : ");
    scanf("%d",&a);
    if(a%8==0 && a%5==0){
        printf("%d is divisible by 8 and 5",a);
    }
    else if(a%8==0){
        printf("%d is divisible by 8",a);
    
    }
    else if (a%5==0){printf("%d is divisible by 5",a);
    }
    else if(a%8!=0 && a%5!=0){
        printf("%d is divisible by 8 and 5",a);
    
    }
    
}