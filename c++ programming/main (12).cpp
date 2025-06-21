#include <iostream>
using namespace std;

class r
{
    public:
    virtual void sub()=0;
};
class s : public r
{
    public:
    string address;
    void sub()
    {
        cout<<"enter your address:"<<endl;
        cin>>address;
        
    }
};    
class v: public r
{
    
    public:
    int age;
    void sub()
    {
        cout<<"enter your age:"<<endl;
        cin>>age;
        
    }
};
int main()
{
    s s1;
    v v1;
    
    s1.sub();
    v1.sub();
    
    // cout<<address<<endl;
    // cout<<age<<endl;
    return 0;
}