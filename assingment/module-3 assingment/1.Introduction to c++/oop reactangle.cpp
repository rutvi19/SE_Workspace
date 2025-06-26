#include <iostream>
using namespace std;

class Rectangle 
{
    float length, width; 

public:
    
    void input() 
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    
    void Area() 
    {
        float area = length * width;
        cout << "Area = " << area << endl;
    }
};

int main() 
{
    Rectangle r;
    r.input();   
    r.Area(); 

    return 0;
}
