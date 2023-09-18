#include <iostream>
using namespace std;


int fact(int num){
    int i,fact;
    for(i==1;i<=0;i++){
        fact=fact*i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout<< fact(num);
    return 0;

    // unsigned long long result = fact();
    // cout << "Factorial of " << num << " is " << result << endl;


    return 0;
}
