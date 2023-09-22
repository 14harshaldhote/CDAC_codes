//question 5
#include<iostream>
 using namespace std;

class book{
    private:
    int BOOK_NO;
    char BOOK_TITLE[20];
    float Price;
    
    float Total_cost(int n){
        float total=n*Price;
        return total;
    }
    public:
    void INPUT() {
        cout<<"*********************** Enter details ********************************\n";
        
        cout<<"\nEnter Book Title: ";
        cin>>BOOK_TITLE;
        cout<<"\nEnter Book No: ";
        cin>>BOOK_NO;
        cout<<"\nEnter Book Price: ";
        cin>>Price;
    }
    void PURCHASE() {
        cout<<"\n*********************** Purchase details ********************************\n";
        
        cout<<"\nBook Title: "<<BOOK_TITLE;
        cout<<"\nBook No: "<<BOOK_NO;
        cout<<"\nBook Price: "<<Price;
        cout<<"\nTotal Cost: "<<Total_cost(BOOK_NO)<<"\n";
}};

int main() {
    book obj;
    obj.INPUT();
    
    obj.PURCHASE();
    return 0;

}