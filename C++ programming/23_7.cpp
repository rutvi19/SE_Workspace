#include<iostream>
using namespace std;

class parent
{
    public:
    int p,q;
    parent()
    {
         cout<<"this is default";
    }
    parent(int a , int b)
    {
        cout<<"parametrized constructor called";
        p = a;
        q = b;
    }
    parent(const parent &c)
    {
        p = c.p;
        q = c.q;
        
        cout<<"copy constructor called\n"<<endl;
        
    }
    void add()
    {
        cout << p << " "<< q <<"\n";
    }
};


int main()
{
    parent obj(20,30);
    parent obj2(obj);
    obj2.add();
}
