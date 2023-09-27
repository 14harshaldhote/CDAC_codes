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
    void put();
    
};
void student::put(){
        cout<<"\n Id : "<<id<<"\n Name : "<<name;
    }
int main(){
    // student s;
    // s.get();
    // s.put();
    student s[2];
    for(int i=0;i<2;i++){
        s[i].get();
        s[i].put();
    }
    student s1, *p;
    p=&s1;
    p->get();
    p->put();

}