//question 1
#include<iostream>
 using namespace std;

class student{
    private:
    int admno;
    char sname[20];
    float eng,math,science,total;
    float ctotal(){
        total=eng+math+science;
        return total;
    }
   
    public: 

    
    void Takedata(){
        cout<<"enter admno: ";
        cin>>admno;
        cout<<"enter sname: ";
        cin>>sname;
        cout<<"enter eng: ";
        cin>>eng;
        cout<<"enter math: ";
        cin>>math;
        cout<<"enter science: ";
        cin>>science;
    }
    void showdata(){
        cout<<"\n---------------------------------\n"<<endl;
        cout<<"admno: "<<admno<<endl;
        cout<<"sname: "<<sname<<endl;
        cout<<"eng: "<<eng<<endl;
        cout<<"math: "<<math<<endl;
        cout<<"science: "<<science<<endl;
        cout<<"total: "<<ctotal()<<endl;
        cout<<"\n---------------------------------\n"<<endl;
    }
};
int main() {
    student s;
    s.Takedata();
    s.showdata();
    return 0;
}