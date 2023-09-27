//class A and B 

#include<iostream>
using namespace std;

class A{
    private:
    int a;
    public:
    int geta(){
        cout<<"Enter A : "<<endl;
        cin>>a;
        return a;
    }
};
class B{
    private: 
    int b;
    public: int getb(){
        cout<<"Enter B: "<<endl;
        cin>>b;
        return b;

    }

};
class C:public A,public B{
    private:
    int c,x,y;
    public: 
    int add(){
        int  x=geta();
        int y=getb();
        
        c=x+y;
        cout<<c;
        // c=a+b;
        // cout<<c;
        return c;
    }
    
};
int main(){
    C c1;
   
    c1.add();
    


}