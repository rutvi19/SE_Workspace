#include<iostream>
using namespace std;

struct circle
{
    int breath,Height;
};

int main()
{
    
    struct circle cir;
    int ans;
    
    cout<<"Enter Your breath: "<<endl;
    cin>>cir.breath;
    
    cout<<"Enter Your Height: "<<endl;
    cin>>cir.Height;
    
    ans = 0.5*cir.breath*cir.Height;
    
    cout<<"Area of triangle is : "<<ans<<endl;

    return 0;
}
 