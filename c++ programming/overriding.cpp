#include <iostream>  
using namespace std;  

class parent
{  
    public:  
        
        int age=13;
        int id=123;
        
         
}; 
  
class child: public parent  
{    
    public:  
     int c1 ()
    {    
       /* int age=13;
        int id=123;*/
    
        cout<<age<<endl;
        cout<<id<<endl;
    
    
    }      
};  
int main() 
{  

   child c = child();    
 
   c.c1();
   return 0;  
}