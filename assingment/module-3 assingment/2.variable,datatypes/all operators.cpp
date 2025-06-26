#include <iostream>
using namespace std;

int main() 
{
   int a,b,sum;
   cout<<"enter a:"<<endl;
   cin>>a;
   
   cout<<"enter b:"<<endl;
   cin>>b;
   
   //arithmetic operator
//   sum=a+b;
//     cout<<sum<<endl;
//   sum=a-b;
//     cout<<sum<<endl;
//   sum=a*b;
//     cout<<sum<<endl;
//   sum=a/b;
//     cout<<sum<<endl;
//   sum=a%b;
//     cout<<sum<<endl;
    
    //relational operator
    // sum=a>b;
    // cout<<sum<<endl;
    // sum=a<b;
    // cout<<sum<<endl;
    // sum=a>=b;
    // cout<<sum<<endl;
    // sum=a<=b;
    // cout<<sum<<endl;
    // sum=a!=b;
    // cout<<sum<<endl;
    // sum=a==b;
    // cout<<sum<<endl;
    
    //logical operator
    // sum=a!=b;
    // cout<<sum<<endl;
    // sum=a&&b;
    // cout<<sum<<endl;
    // sum=a||b;
    // cout<<sum<<endl;
    
    
    //bitwise operator
    sum=a&b;
    cout<<sum<<endl;
    sum=a^b;
    cout<<sum<<endl;
    sum= ~a;
    cout<<sum<<endl;
    
    return 0;
}
