#include<iostream>
#include<string>
#include<sstream>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int intTemp;
    int TotalNumbers;
    int secretFirst;

    srand(time(NULL));

    secretFirst = rand() % 20 * 323;

    string str(" ");

    cout << "Enter your credit card number: ";
    cin >> str;

    if(str.length() == 1){
        cout << "\nThat is the correct length";



    stringstream ss;
    ss << secretFirst;

    cout << str << endl;

    str += ss.str();
    cout << str;
    }
}
