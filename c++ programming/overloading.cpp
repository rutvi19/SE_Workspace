#include<iostream>
using namespace std;

class a1
{

public:

   int a2(int a , int b)
    {
        return a + b;
    }
public:
   long double a2(long double a,long double b)
    {
         return a * b;
    }
};

int main()
{
    a1 a = a1();

    cout<<a.a2(3,4)<<endl;
    cout<<a.a2(5.0l,6.0l);
}