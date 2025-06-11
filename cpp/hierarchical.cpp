
#include<iostream>
using namespace std;

class M
{
    public:
    int a=10;
};

class N 
{
   public:
   int b=20;
};

class P : public N,public M
{
    public:
    int c=30; 
    
    public:
    void print()
    {
        cout<<"A is :"<<a<<endl;   
        cout<<"B is :"<<b<<endl;   
        cout<<"C is :"<<c<<endl;   
    }
    
    
};

int main()
{
     P p1 = P();
     
     p1.print();
    
    return 0;
}
