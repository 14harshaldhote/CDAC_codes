//question 6
#include<iostream>
using namespace std;

class reprot{
    private:
    int adno;
    char name[20];
    float marks[5];
    float avg;

    void GETAVG(){

        float t=0.0;
        for(int i=0;i<5;i++){
            t+=marks[i];
        }
        avg=t/5;

    }
    public:
    void READINFO(){
        while (true) {
            cout << "Enter the adno (4 digits): ";
            cin >> adno;

            if (adno >= 1000 && adno <= 9999) {
                break;
            } else {
                cout << "Invalid input !" << endl;
            }
        }
        

        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the marks: ";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
        GETAVG();
    }
    void PRINTINFO(){
        cout<<"Adno: "<<adno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: \n";
        for(int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
        cout<<"\nAverage: "<<avg<<endl;
    }
};

int main(){
    reprot obj;
    obj.READINFO();
    cout<<"****************************************************************\n";
    obj.PRINTINFO();
    return 0;
}