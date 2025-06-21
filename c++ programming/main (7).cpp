#include <iostream>  
using namespace std;

class fruits 
{    
    public:   
    virtual void apple()=0;
};   

 class vegetable: fruits    
{    
    public:  
     void apple()    
    {    
        cout <<"mast mast hoi fruits..." <<endl;    
    }    
};   

 class humans : fruits    
{    
     public:  
      void apple()    
     {    
         cout <<"mast mast hoi vegetable..." <<endl;    
     }   
};  

int main()
{
    //Shape s;
    vegetable veg;  
    humans hum;
  
    veg.apple();    
    hum.apple();   
    return 0;
}