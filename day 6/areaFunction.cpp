// area function
//area circle
//area rectangle

#include <iostream>
#include<math.h>
using namespace std;

int area(int a,int b){
    int i=a*b;
    return i;
}
float area(float r){
    float c=3.14*r*r;
    return c;
}
int main(){
    int a=3,b=6;
    float r=3.5;

    cout<<area(a,b)<<endl;
    cout<<area(r)<<endl;
}
