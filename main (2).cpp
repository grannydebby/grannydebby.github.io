/******************************************************************************
This program will allow for users to tell how much their money is worth
in some crytocurrencies
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice;         // variable holds our menu choice
    double money;       // variable to hold our money
    double converted;   // variable to hold the converted money
    
    //use cout statements to display the menu
    cout << "Select from one of the following cryptocurrencies" << endl;
    cout << "\t 1. Bitcoin (BTC)" << endl;
    cout << "\t 2. Ethereum (ETH)" << endl;
    cout << "\t 3. Dogecoin (DOGE)" << endl;
    cout << "\t 4. Tether (USTC)" << endl;
    cout << "Enter your choice (1, 2, 3, 4): ";
    cin >> choice;
    
    //validate so that menu choices are restricted to 1 - 4
    while(choice < 1 or choice > 4)
    {
        //display a error and then re- display the menu
        cout << "ERROR: INVALID MENU CHOICE. TRY AGAIN" << endl << endl;
        cout << "Select from one of the following cryptocurrencies" << endl;
        cout << "\t 1. Bitcoin (BTC)" << endl;
        cout << "\t 2. Ethereum (ETH)" << endl;
        cout << "\t 3. Dogecoin (DOGE)" << endl;
        cout << "\t 4. Tether (USTC)" << endl;
        cout << "Enter your choice (1, 2, 3, 4): ";
        cin >> choice;
    }
    
    // after we have validated our menu choice, get th input of our money
    cout << endl << "How much moeny do you have? $";
    cin >> money;
    
    //validate the in input of the money
    while(money < 0)
    
{
        //display an ERROR
    cout << "ERROR: INVALID AMOUNT OF MONEY ENTERED. TRY AGAIN." << endl;
    cout << endl << "Enter an amount of money (enter at least $0.00): $";
    cin >> money;
}    
    cout << setprecision(2) << showpoint << fixed;
    cout << endl << "$" << money << " USD= ";
    cout << setprecision(6) << showpoint << fixed;
    //use if / else if to calculate the converted money
    if(choice == 1)
        cout << (money * (1 / 38837.27)) << "BTC";
    else if (choice ==2)
            cout << (money *(1 / 2410.91)) << "ETH";
    else if (choice ==3)
        cout << (money * (1 / 0.32)) << "DOGE";
    else 
        cout << (money * (1 / 1.0004)) << "USTC";
    
    
    
    
    
    
    
return 0;
}




















