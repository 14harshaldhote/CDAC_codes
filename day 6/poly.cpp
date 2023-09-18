#include<iostream>

using namespace std;

int add(int a,int b){

    int r=a+b; return r;
}
int add(int a,int b, int c){
    int r1=a+b+c; return r1;
}
double add(int a,double f){
    double r2=a+f; return r2;
}
int main(){
    int a = 5, b = 10, c = 15;
    double f = 3.5;
    
    int r = add(a, b);
    int r1 = add(a, b, c);
    double r2 = add(a, f);

    cout << "Result 1: " << r << endl;
    cout << "Result 2: " << r1 << endl;
    cout << "Result 3: " << r2 << endl;
    
    return 0;

    
}
