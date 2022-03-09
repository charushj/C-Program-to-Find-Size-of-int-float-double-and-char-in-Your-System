#include <iostream>
using namespace std;

int main() //will be using sizeof operator to find the used size by these variables
{    
    cout << "Size of char: " << sizeof(char) << " byte" << endl; //gives size of char variable
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;  //gives size of int variable
    cout << "Size of float: " << sizeof(float) << " bytes" << endl; //gives size of float variable
    cout << "Size of double: " << sizeof(double) << " bytes" << endl; //gives size of double variable

    return 0;
} //end of the program