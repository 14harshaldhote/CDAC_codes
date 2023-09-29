// friend function common in two classes.
#include<iostream>
using namespace std;
class samples{
    int a;
    public:
        samples(){
            a = 10;
        }
    friend void add();
};      // end of sample class
class demo{
    int b;
    public:
        demo(){
            b = 20;
        }
        friend void add();
};
void add(){
    samples s;
    demo d;
    int c= s.a + d.b;
    cout<<"Addition= "<<c;
}
int main(){
    add();
}
