#include <iostream>
using namespace std;
class vehicle
{
    public:
    string brand = "mahindra brand";
};
class car: public vehicle
{
    public:
    string name;
    int model;
    int door;
    
    int display()
    {
        cout<<"brand name is:"<<brand<<endl;
        cout<<"enter car name is:"<<endl;
        cin>>name;
        
        cout<<"enter model:"<<endl;
        cin>>model;
        
        cout<<"how many door:"<<endl;
        cin>>door;
        
        cout<<name<<endl;
        cout<<model<<endl;
        cout<<door<<endl;
    }
};
class bike : public vehicle
{
    public:
    string name;
    int model;
    int door;
    
    int display()
    {
        cout<<":enter bike name:"<<endl;
        cin>>name;
        
        cout<<"enter model:"<<endl;
        cin>>model;
        
        cout<<"enter door:"<<endl;
        cin>>door;
        
        cout<<name<<endl;
        cout<<model<<endl;
        cout<<door<<endl;
    }
};
int main()
{
    vehicle *v;
    
    car c;
    bike b;
    
    v = &c;
    v = &b;
    
    c.display();
    b.display();
    return 0;
}