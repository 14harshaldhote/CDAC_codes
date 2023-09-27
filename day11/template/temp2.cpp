#include<iostream>

using namespace std;

template <class T>
T add(T a,T b){
    return a+b;
}
int main(){
    float x=34.7,z;
    float y=45.55;
    z=add(x,y);
    cout<<"Addition of number is "<<z<<endl;

}