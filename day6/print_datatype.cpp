//WAP to prinft diffret data types by uisng fucntion name "print" function

#include<iostream>
using namespace std;

int print(int a)
{
    cout<<"integer: "<<a<<endl;
    return a;
}
char print(char b){
    cout<<"char: "<<b<<endl;
    return b;
}
float print(float c){
    cout<<"float: "<<c<<endl;
    return c;
}
long double print(long double d){
    cout<<"double: "<<d<<endl;
    return d;
}
int main(){
    int a=10;
    char b='a';
    float c=10.5f;
    long double d=10.587236246827842;
    print(a);
    print(b);
    print(c);
    print(d);
}