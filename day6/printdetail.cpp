#include <iostream>


using namespace std;
class print{
    private :
        int id;
        string name;
        string address;
     
    public :
    print(){
        cin >> id;
        cin >> name;
        cin >> address;
    }
    int getid() { return id; }
    string getname() { return name; }
    string getaddress() { return address; }

};
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        print p;
        cout << p.getid() << " " << p.getname() << " " << p.getaddress() << endl;
    }
    
}
// #include <iostream>
// using namespace std;

// class print {
// private:
//     int id;
//     string name;
//     string address;

// public:
//     print() {
//         cin >> id;
//         cin >> name;
//         cin >> address;
//     }

//     // Public member functions (getters) to access private members.
//     int getId() {
//         return id;
//     }

//     string getName() {
//         return name;
//     }

//     string getAddress() {
//         return address;
//     }
// };

// int main() {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         print p;
//         cout << p.getId() << " " << p.getName() << " " << p.getAddress() << endl;
//     }
//     return 0;
// }
