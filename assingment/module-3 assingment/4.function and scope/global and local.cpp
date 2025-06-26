#include <iostream>
using namespace std;

// Global variable
int number = 10;

void display() 
{
    // Local variable
    int number = 5;
    
    cout << "Local number = " << number << endl;    
   
}

int main() 
{
    
    cout << "Global number = " << number << endl;       // This will print 10 //Global variable

    display();//local variable

    return 0;
}
