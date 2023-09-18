#include<iostream>

using namespace std;

class demo{
    private : int a,b;

    public: demo(){
        a=10;
        b=30;    

    }
    demo(int ,int );
    
    demo(demo &x){
        a=x.a;
        b=x.b;
    }
        
    // :: must be done.
    
    void show(){
        cout<<a<<" "<<b<<endl;
    }
    ~demo(){
        cout<<" destructor"<<endl;
    }
};
demo::demo(int x,int y){
        a=x;
        b=y; 
    }


int main(){

    demo d,d1(2,3),d2(d);
    d.show();
    d1.show();
    d2.show();
    
    return 0;

}

