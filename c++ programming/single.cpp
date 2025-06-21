#include<iostream>
using namespace std;
class A
{
    public:
    int salary=10000;
    
    public:
    void getsalary1()
    {
        cout<<salary<<endl;
    }
};
class B : public A
{
    public:
    int mysalary=20000;
    
    public:
    void getsalary2()
    {
        cout<<mysalary<<endl;
    }
};
int main()
{
    
   
    B b1 = B();
    
    b1.getsalary1();
    b1.getsalary2();
    
    return 0;
}