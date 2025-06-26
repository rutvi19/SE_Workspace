#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    int i, len, Palindrome = 1;

    cout<<"Enter a string:"<<endl;
    cin>>str;  

    len = strlen(str);

    
    for (i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            Palindrome = 0;  
            break;
        }
    }
    if (Palindrome)
    {
        cout<<"string is a palindrome"<<endl;
    }    
    else
    {
        cout<<"string is  nota palindrome"<<endl;
    }        

    return 0;
}
