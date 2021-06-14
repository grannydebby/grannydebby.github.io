/******************************************************************************
This is a demo of input and output
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int age;        //vaiable to hold a user's age 
    string name;    // vaiable to hold a user's name
    
    //prompt the user for the name
    cout << "What is your name? ";
    getline(cin,name);  //allowsfor the user to enter their name with saces
    
    // prompt the user for their age
    cout << "How old are you?";
    cin >> age; //allows for the user to enter their age
    
    //display th user's name and age
    cout << endl << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    
    return 0;
}
