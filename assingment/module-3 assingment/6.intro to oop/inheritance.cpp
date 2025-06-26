#include <iostream>
using namespace std;

class person
{
    public:
    int age = 20;
    
    public:
    void show1()
    {
        cout<<age<<endl;
    }
};
class student : public person
{
    public:
    int age1 = 19;
    
    public:
    void show2()
    {
        cout<<age1<<endl;
    }
    
};
class teacher : public student
{
    public:
    int age2 = 18;
    
    public:
    void show3()
    {
        cout<<age2<<endl;
    }  
};
int main()
{
    
    
    teacher a = teacher();
    a.show1();
    a.show2();
    a.show3();
    
    
    return 0;
}