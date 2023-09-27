//Hiracrchay 
#include<iostream>

using namespace std;
class Student{
    private:
    int id;
    char name[100];
    public:
    void get(){
        
        cout<<"\nEnter the id: ";
        cin>>id;
        cout<<"\nEnter the name: ";
        cin>>name;
    }
    void put(){
        cout<<"\nId: "<<id<<"\nName: "<<name;
    }
};
class Science: public Student{
    private:
    char s1[20], s2[20],s3[20];
    public:
    void getS(){
        get();
        
        cout<<"\nEnter the subject 1: ";
        cin>>s1;
        cout<<"\nEnter the subject 2: ";
        cin>>s2;
        cout<<"\nEnter the subject 3: ";
        cin>>s3;
    }
    void putS(){
        put();
        cout<<"\nSubject 1: "<<s1<<"\nSubject 2: "<<s2<<"\nSubject 3: "<<s3;
        
    }
};
class Commerce:public Student{
    private:
    char c1[20], c2[20],c3[20];
    public:
    void getC(){
     
        get();
        cout<<"\nEnter the course 1: ";
        cin>>c1;
        cout<<"\nEnter the course 2: ";
        cin>>c2;
        cout<<"\nEnter the course 3: ";
        cin>>c3;
    }
    void putC(){
        put();
        cout<<"\nCourse 1: "<<c1<<"\nCourse 2: "<<c2<<"\nCourse 3: "<<c3;
    }

};
int main(){
   

    Science s;
    Commerce c;
    s.getS();
    c.getC();
    s.putS();
    c.putC();
    return 0;
}