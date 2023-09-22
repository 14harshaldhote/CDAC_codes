//question 3
#include<iostream>
using namespace std;
class TEST{
    int TestCode;
    string Description;
    int NoCandidate;
    int CenterRead;

    int CALCNTR(){
        CenterRead = (NoCandidate/100)+1;
        return 0;
    }

    public :
    void SCHEDULE(){
        cout<<"ENTER TEST CODE :"<<endl;
        cin>>TestCode;
        cout<<"ENTER DESCRIPTION :"<<endl;
        cin>>Description;
        cout<<"ENTER NUMBER OF CANDIDATES :"<<endl;
        cin>>NoCandidate;
        CALCNTR();
    }
    void DISPLAY(){
        cout<<"Test Code :"<<TestCode<<endl;
        cout<<"Description :"<<Description<<endl;
        cout<<"No Candidate :"<<NoCandidate<<endl;
        cout<<"Center Read :"<<CenterRead<<endl;
    }


};

int main() {
    TEST test;
    test.SCHEDULE();
    cout << "************ Test Details ************" << endl;
    test.DISPLAY();
    return 0;

}
