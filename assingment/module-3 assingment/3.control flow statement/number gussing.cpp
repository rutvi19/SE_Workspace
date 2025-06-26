#include <iostream>
using namespace std;

class gaming 
{
    public:
    int n, gnum = 36, i =1;

   void display()
   {
      
       cout<<"\n Welcome to the Game! You will get 6 chance to get the correct number.";
       
       while(i<=6)
       {
            cout<<"\n Enter any Number:";
            cin>>n;
       
            if(gnum < n)
       {
           cout<<"Too high !"<<endl;
       }
       else if(gnum > n)
       {
           cout<<"Too low!"<<endl;
       }
       else
       {
           cout<<"You guess the correct number! Well done.";
           break;
       }
       
           i++;
       }
       
      
   }
};

int main() 
{
   
   gaming g1 = gaming();
   
   g1.display();

    return 0;
}
