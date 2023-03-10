//10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8\
characters or does contain a digit or special symbol or space.
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char nickname[100];
    cout<<"Enter your nickname: ";
    cin.getline(nickname,100);
    int count=0;
    try
    {
        if(strlen(nickname)>8)
         throw "Nickname should not be greater than 8 character";
        int i=0;
        while (nickname[i])
        {
           if(!((nickname[i]>=65&&nickname[i]<=90)||(nickname[i]>=97&&nickname[i]<=122))) 
            throw"Nickname does not contain any space, number & special characters";
           i++;
        }
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    cout<<nickname;
    return 0;
}