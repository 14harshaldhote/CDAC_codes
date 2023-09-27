#include <iostream>
#include <string>

using namespace std;

class cashRegister
{
private:
    int cashOnHold;

public:
    cashRegister()
    {
        cashOnHold = 500;
    }
    cashRegister(int initialvalue)
    {
        cashOnHold = initialvalue;
    }
    int getCurrentBalance()
    {
        return cashOnHold;
    }
    void acceptAmount(int amount)
    {
        cashOnHold += amount;
    }
};

class dispenserType
{
private:
    int numberOfItems;
    int cost;

public:
    dispenserType()
    {
        numberOfItems = 5;
        cost = 50;
    }
    dispenserType(int numberOfItems, int cost)
    {
        this->numberOfItems = numberOfItems;
        this->cost = cost;
    }
    int getNoOfItems()
    {
        return numberOfItems;
    }
    int getCost()
    {
        return cost;
    }
    void makeSale()
    {
        if (numberOfItems > 0)
        {
            numberOfItems--;
        }
    }
};

void showProduct()
{
    cout << "*********************** Our Products **********************\n";
    cout << "                  Select Product" << endl;
    cout << "                  1. Candy" << endl;
    cout << "                  2. Chips" << endl;
    cout << "                  3. Gum" << endl;
    cout << "                  4. Cookies" << endl;
}

void selectProduct(dispenserType &disp, cashRegister &cash)
{
    while (true)
    {
        int i;
        showProduct();
        cout << "Enter your choice: ";
        cin >> i;

        string product;
        int cost = 0;

        switch (i)
        {
        case 1: // Candy
            product = "Candy";
            cost = disp.getCost();
            break;
        case 2: // Chips
            product = "Chips";
            cost = disp.getCost();
            break;
        case 3: // Gum
            product = "Gum";
            cost = disp.getCost();
            break;
        case 4: // Cookies
            product = "Cookies";
            cost = disp.getCost();
            break;
        default:
            cout << "Invalid choice." << endl;
            return;
        }

        if (disp.getNoOfItems() > 0)
        {
            cout << "Cost of " << product << ": rs" << cost << endl;
            cout << "Insert money: ";
            int money;
            cin >> money;
            if (money >= cost)
            {
                disp.makeSale();
                cash.acceptAmount(cost);
                cout << "Enjoy your " << product << "!" << endl;
            }
            else
            {
                cout << "Insufficient money. Transaction canceled." << endl;
            }
        }
        else
        {
            cout << "This product is sold out." << endl;
        }

        cout << "Current cash in register: rs" << cash.getCurrentBalance() << endl;
        cout << "Remaining " << product << "s: " << disp.getNoOfItems() << endl;

        char continueChoice;
        cout << "Continue? (y/n): ";
        cin >> continueChoice;
        if (continueChoice != 'y' && continueChoice != 'Y')
        {
            break;
        }
    }
}

int main()
{
    cashRegister cash;
    dispenserType candyDispenser(10, 30);
    dispenserType chipsDispenser(15, 40);
    dispenserType gumDispenser(20, 20);
    dispenserType cookiesDispenser(5, 60);

    selectProduct(candyDispenser, cash);

    return 0;
}
