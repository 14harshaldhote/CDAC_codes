#include <iostream>
using namespace std;

void addByValue(int a) {
    int result = a * 2;
    // cout << "Result of addition: " << result << endl;
}

int main() {
    int num1 = 5;
    addByValue(num1);
    cout << "num1: " << num1 << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// // Function to perform addition by value
// int addByValue(int a) {
//     int result = a * 2; // Calculate the result and store it in a different variable
       
// };

// int main() {
//     int num1 = 5;

//     // Call the addByValue function with num1
//     int result = addByValue(num1);

//     // Print the result
//     cout << "Result of addition: " << result << endl;

//     // Print num1 to show it was not modified
//     cout << "num1: " << num1 << endl;

//     return 0;
// }
