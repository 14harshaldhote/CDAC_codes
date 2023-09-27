//function overloading

#include<iostream>
using namespace std;

class Add{
    private:
    int a,b,c;
    public:
    void add(){
        int a=4,b=5;
        c=a+b;
        cout<<c<<endl;
    }
    void add(int a,int b){
        c=a+b;
        cout<<c<<endl;
    }



};
int main(){
    Add obj;
    obj.add(10,20);
    obj.add();
    
    
    return 0;
}

