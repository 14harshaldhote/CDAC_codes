#include<iostream>
using namespace std;

class base{
    private:
    int a,b;
    public:
    void get(){
        cin>>a>>b;
    }
    void show(){
        cout<<"A "<<a<< endl;
        cout<<"B "<<b<<endl;
    }
};
class derv:public base{
    public:
    void display(){
    get();
    show();}

};

int main(){
    derv d;
    d.get();
    d.show();
}