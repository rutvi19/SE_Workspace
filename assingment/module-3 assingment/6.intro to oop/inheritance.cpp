
#include<iostream>
using namespace std;

class Shape
{
    public:  
    int a;  
    int b; 
    
    public:
    void get_data(int n,int m)  
    {  
        a= n;  
        b = m;  
    }  
    
    
};

class Rec : public Shape
{
    public:
    int rec_area()
    {
        int result = a*b;  
        return result;  
    }
};
class Triangle : public Shape
{
      public:
     int tri_area()
    {
        float result = 0.5*a*b;  
        return result;  
    }
};



int main()
{
    int length,breadth,base,height;
    
    //Rec
    
    cout << "Enter the length and breadth of a rectangle: ";
    cin>>length>>breadth;
    Rec r = Rec();
    r.get_data(length,breadth);
    int m = r.rec_area();
    
    //Tri
    cout << "Enter the base and height of the triangle: "<<endl;  
    cin>>base>>height;  
    Triangle t = Triangle();
    t.get_data(base,height);
    //t.tri_area();
    int n = t.tri_area();
    
    cout<<"Area of Rectangle is : "<<m<<endl;
    cout<<"Area of Triangle is : "<<n<<endl;
    
    
    return 0;
}
