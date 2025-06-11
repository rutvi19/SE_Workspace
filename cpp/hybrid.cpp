#include<iostream>
using namespace std;
class A
{
    public:
    int a=10;
    
    public:
    void get_data()
    {
        cout<<a<<endl;
    }
};
class B : public A
{
     public:
    int a1=20;
    
    public:
    void get_data1()
    {
        cout<<a1<<endl;
    }
};
class C : public A
{
    public:
    int a2=30;
    
    public:
    void get_data2()
    {
        cout<<a2<<endl;
    }
    
};
class D : public B , public C
{
    public:
    int a3=40;
    
    public:
    void get_data3()
    {
        cout<<a3<<endl;
    }
    
};

int main()
{
    D d1=D();
    //d1.get_data();
    d1.get_data1();
    d1.get_data2();
    d1.get_data3();

    return 0;
}