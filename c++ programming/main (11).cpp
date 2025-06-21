#include <iostream>
using namespace std;

class shape
{
    public:
    virtual void draw()=0;
};
class Rectangle: shape
{
    public:
    void draw()
    {
        cout<<"Rectangle......."<<endl;
    }
};    
class circle : shape
{
    
    public:
    void draw()
    {
        cout<<"circle......."<<endl;
    }
};
int main()
{
    Rectangle r= Rectangle();
    circle c= circle();
    
    r.draw();
    c.draw();
    return 0;
}