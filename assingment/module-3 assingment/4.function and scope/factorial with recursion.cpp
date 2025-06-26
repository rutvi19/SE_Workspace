#include <iostream>
using namespace std;
int fac(int n)
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    else
    {
        return n * fac(n - 1); 
    }    
}
int main()
{
    int number;
    cout<<"enter number:"<<endl;
    cin>>number;
    
    cout<<" factorial number " <<number<< " is " <<fac(number)<<endl;

    return 0;
}