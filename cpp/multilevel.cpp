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
class C : public B
{
     public:
     int mysalary2=30000;
    
    public:
    void getsalary3()
    {
        cout<<mysalary2<<endl;
    }
};
int main()
{
    
   
   C c1 = C();
    
   c1.getsalary1();
   c1.getsalary2();
   c1.getsalary3();
    
    return 0;
}