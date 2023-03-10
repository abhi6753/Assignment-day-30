//1. Write a C++ program to demonstrate the use of try, catch block with the argument as an\
integer and string using multiple catch blocks.
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter value of x : ";
    cin>>x;
    try
    {
        if(x%2!=0)
          throw "Odd number";
        if(x%2==0)
          throw x;
    }
    catch(char *str)
    {
        cout<<str<<endl;
    }
    catch(int x)
    {
        cout<<x<<" is even number."<<endl;
    }
    return 0;
}