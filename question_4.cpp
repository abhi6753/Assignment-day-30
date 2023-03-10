//4. Write a C++ program to accept an email address and throw an exception if it does not\
contain @ symbol.
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    char *ch;
    ch=new char;
    cout<<"Enter email address:"<<endl;
    cin>>ch;
    try
    {
        for(int i=0;ch[i];i++)
        {
            if(ch[i]=='@')
            {
              throw 1;
            }
            else
            {
                continue;
            }
            
        }
        throw 0;
    }
    catch(int i)
    {
       if(i)
       {
        cout<<"Valid Email Address"<<endl;
       }
       else
       cout<<"Not valid"<<endl;
    }
    return 0;
}
