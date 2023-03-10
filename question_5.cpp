//5. Write a C++ program to accept a mobile number and throw an exception if it does not\
contain 10 digits.
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    long int num,temp;
    cout<<"Enter your mobile number:"<<endl;
    cin>>num;
    int count=0;
    temp=num;
    while(temp)
    {
        count++;
        temp/=10;
    }
    try
    {
       if(count==10)
       {
        throw"Valid mobile number";
       }
       else{
        throw "Not valid number";
       }
    }
    catch(const char *str)
    {
        cout<<str;
    }
    return 0;
}