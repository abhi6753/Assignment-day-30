//9. Write a C++ program to accept Gmail id only and throw an exception if the id does not \
contain @ and gmail.com.
#include <iostream>
#include <string>
using namespace std;
bool checkGmail(string gmail)
{
    string  email ="@gmail.com";
    if(gmail.find(email)!=-1)
    {
       return true;
    }
    return false;
}
    int main()
    {
       string gmail;
        cout << "Enter your Gmail id: " << endl;
        cin>>gmail;
        try
        {
            if (checkGmail(gmail))
            {
                throw "Valid Email id";
            }
            else
            {
                throw "Invalid Email id";
            }
        }
        catch (const char *str)
        {
            cout << str<<endl;
        }
        system("pause");
        return 0;
    }