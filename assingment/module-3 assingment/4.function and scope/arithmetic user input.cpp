#include <iostream>
using namespace std;

int s(int a, int b)
{
    int c = a + b;
    return c;
}
int r(int a, int b)
{
    int c = a - b;
    return c;
}
int v(int a,int b)
{
    int c = a / b;
    return c;
}
int g(int a,int b)
{
    int c = a * b;
    return c;
}
int main()
{
    int a, b, z;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;

    z = s(a, b);
    cout << z<<endl;
    
    z = r(a, b);
    cout << z<<endl;
    
    z = v(a, b);
    cout << z<<endl;
    
     z = g(a, b);
    cout << z<<endl;
}