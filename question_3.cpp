//3. Write a C++ program to perform arithmetic operations on two numbers and throw an\
exception if the dividend is zero or does not contain an operator.
#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  char Operator;
  cout << "Enter first number : " << endl;
  cin >> a;
  cout << "Enter operator : " << endl;
  cin >> Operator;
  try
  {
    if (Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/')
      throw Operator;
    cout<<"Enter second number : "<<endl;
    cin>>b;
    switch (Operator)
    {
    case '+':
      c=a+b;
      break;
    case '-':
      c=a-b;
      break;
    case '*':
      c=a*b;
      break;
    case '/':
      if(b==0)
        throw "Denominator should not be 0";
      c= a/b;
      break;
    }
    cout <<"Result = "<< c;
  }
  catch(const char ch)
  {
    cout<<"Exception caught...\n Bad operator : "<<ch<<" is not valid operator"<<endl;
  }
  catch (const char *str)
  {
    cout << str << endl;
  }
  
  return 0;
}
