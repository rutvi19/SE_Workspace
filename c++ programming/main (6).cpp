#include<iostream>
using namespace std;

struct student
{
    string name;
    int age;
};
int main()
{
    struct student s;
    cout<<"enter your name:"<<endl;
    cin>>s.name;
    cout<<"enter your age:"<<endl;
    cin>>s.age;
    
    cout<<"your name is:"<<s.name<<endl;
    cout<<"your age is:"<<s.age<<endl;
    

    
    return 0;
}