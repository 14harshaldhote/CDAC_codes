// //999> <=9999
//question 2
#include<iostream>
using namespace std;

class batsman {
private:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batavg;

    float calavg() {
        if (innings - notout > 0) {
            batavg = static_cast<float>(runs) / (innings - notout);
        } else {
            batavg = 0.0;
        }
        return batavg;
    }

public:

    void readdata() {
        cout << "***************** READING DATA ******************" << endl;
        while (true) {
            cout << "Enter the batsman code (4 digits): ";
            cin >> bcode;

            if (bcode >= 1000 && bcode <= 9999) {
                break;
            } else {
                cout << "Invalid input! Please enter a 4-digit code." << endl;
            }
        }

        cout << "Enter the batsman name: ";
        cin >> bname;
        cout << "Enter the number of innings: ";
        cin >> innings;
        cout << "Enter the number of not out: ";
        cin >> notout;
        cout << "Enter the number of runs: ";
        cin >> runs;
        calavg();
        cout << endl;
    }

    void displaydata() {
        cout << "***************** DISPLAYING DATA ******************" << endl;
        cout << "Batsman code: " << bcode << endl;
        cout << "Batsman name: " << bname << endl;
        cout << "Number of innings: " << innings << endl;
        cout << "Number of not out: " << notout << endl;
        cout << "Number of runs: " << runs << endl;
        cout << "Average: " << batavg << endl;
        cout << endl;
    }
};

int main() {
    batsman b1;
    b1.readdata();
    b1.displaydata();
    return 0;
}

// #include<iostream>
// using namespace std;
// class batsman{
//     private:
//     int bcode;
//     char bname[20];
//     int innings, notout,runs;
//     float batavg;

//     float calavg(){
//         batavg =runs/(innings-notout);
//         return batavg;
//     }
//     public:

//     void readdata(){
//         cout<<"***************** READING DATA ******************"<<endl; 
//         while (true) {
//             cout << "Enter the adno (4 digits): ";
//             cin>>bcode;

//             if (bcode >= 1000 && bcode <= 9999) {
//                 break;
//             } else {
//                 cout << "Invalid input !" << endl;
//             }
//         }
        
//         cout<<"Enter the batsman name: ";
//         cin>>bname;
//         cout<<"Enter the number of innings: ";
//         cin>>innings;
//         cout<<"Enter the number of not out: ";
//         cin>>notout;
//         cout<<"Enter the number of runs: ";
//         cin>>runs;
//         calavg();
//         cout<<endl;
//     }
//     void displaydata(){
//         cout<<"***************** DISPLAYING DATA ******************"<<endl;
//         cout<<"Batsman code: "<<bcode<<endl;
//         cout<<"Batsman name: "<<bname<<endl;
//         cout<<"Number of innings: "<<innings<<endl;
//         cout<<"Number of not out: "<<notout<<endl;
//         cout<<"Number of runs: "<<runs<<endl;
//         cout<<"Average: "<<batavg<<endl;
//         cout<<endl;
//     }
// };
// int main(){
//     batsman b1;
//     b1.readdata();
//     b1.displaydata();
//     return 0;
// }