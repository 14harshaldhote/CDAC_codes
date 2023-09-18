#include<iostream>

using namespace std;
class student {
    private :
    int id;
    char name[20];

    public:
    void get(){
        cout<<"\n Enter the id and name of the student : ";
        cin>>id>>name;
    }
    void put(){
        cout<<"\n Id : "<<id<<"\n Name : "<<name;

    }
};
int main(){
    // student s;
    // s.get();
    // s.put();
    student s, *p;
    p=&s;
    p->get();
    p->put();

}