//question 4
#include<iostream>
using namespace std;

class Flight{
    private:
    int flightId;
    string destination;
    float Distance, Fuel;

    float CALFUEL(){
            if(Distance<=1000){
                Fuel = 500;
            }
            else if(Distance>1000 && Distance<=2000){
                Fuel = 1100;
            }
            else if(Distance>2000){
                Fuel = 2200;
            }
            return 0;

    }
    public:
    void FEEDINFO(){
        cout<<"****************** Enter Values ****************"<<endl;
        cout<<"Enter Flight ID : "<<endl;
        cin>>flightId;
        cout<<"Enter Destination : "<<endl;
        cin>>destination;
        cout<<"Enter Distance : "<<endl;
        cin>>Distance;
        CALFUEL();

    }
    void SHOWINFO() {
        cout<<"Flight ID : "<<flightId<<endl;
        cout<<"Your Destination : "<<destination<<endl;
        cout<<"Distance : "<<Distance<<endl;
        cout<<"Required Fuel : "<<Fuel<<" Ltr"<<endl;
    }
};
int main(){
    Flight flight;
    flight.FEEDINFO();
    cout<<"****************************************************************\n";
    flight.SHOWINFO();
}