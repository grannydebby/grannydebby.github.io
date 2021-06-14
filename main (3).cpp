/******************************************************************************
This is a demo of variabels in C++
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int number = 12;     // variable holds a number without decimal places
    double number2= 15.5;   // variable holds a number with decimal places
    char letter = 'A';     // variable that holds a character in ''
    string phrase = "ABCD"; // variable that holds the phrase "ABCD"
    bool valid = true;   // variable that holds the value true
    
    cout << number << endl;    // displays the value of the number
    cout << number2 << endl;   //displays the value of the number2
    cout << letter << endl;    //displays the value of letter
    cout << phrase << endl;    //displays the value of phrase
    cout << valid << endl;     //displays the value of valid
    
    return 0;
}
