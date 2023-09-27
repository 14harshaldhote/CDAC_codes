#include <iostream>
using namespace std;
class demo{
    friend void msg();
};
void msg(){
    cout<<"\nI am a friend function";
}
int main(){
    msg();
}