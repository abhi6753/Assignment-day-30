//6. Write a C++ program to accept area pin code and throw an exception if it does not\
contain 6 digits.
#include<iostream>
using namespace std;
int main()
{
    int pincode,temp,count=0;
    cout<<"Enter your pincode: ";
    cin>>pincode;
    temp=pincode;
    while(temp)
    {
        count++;
        temp/=10;
    }
    try
    {
        if(count==6)
           throw "Valid pin code";
        else
         throw "Invalid pin code";
    }
    catch(const char *str)
    {
        cout<<str;
    }
    return 0;
}