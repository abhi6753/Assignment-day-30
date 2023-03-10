/*8. Write a C++ program to accept a password and throw an exception if the password has 
less than 6 characters or does not contain a digit or does not contain any special 
character or does not contain any capital letter.*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int max =100;
    char password[max];
    bool num,special,capital;
    num=special=capital=false;
    cout<<"Enter your password:"<<endl;
    cin.getline(password,max);
    try
    {
        if(strlen(password)<6)
        {
            throw"Invalid password,Password must be greater than 6 characaters";
        }
        for(int i=0;password[i];i++)
        {
           if((password[i]>=48&&password[i]<=57)&&(num!=true))
           {
              num = true;
              continue;
           }
            else if((password[i]>=65&&password[i]<=90)&&(capital!=true))
            {
             capital= true;
              continue;
            }
            else if(((password[i]>=32&&password[i]<=47)||(password[i]>=58&&password[i]<=64)||\
            (password[i]>=91&&password[i]<=96)||(password[i]>=123&&password[i]<=126))&&(special!=true))
            {
                special = true;
                continue;
            }
        }
        if(num&&special&&capital)
        {
            throw "Valid Password";
        }
        else
        throw "Password must be one digit(1,2,3,...),one special character(!,@,#,...),one capital letter(A,B,C,...)";
    }
    catch(const char *str)
    {
        cout<<str;
    }
    return 0;
}
