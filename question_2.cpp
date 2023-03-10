// 2. Write a C++ program to demonstrate try, throw and catch statements.
#include <iostream>
using namespace std;
class A
{
public:
  int x;

public:
  void setData(int x)
  {
    this->x = x;
  }
  void f1()
  {
    if (x == 0)
      cout << "Value  of x 0";
    if (x == 1)
      cout << "Value  of x 1";
    if (x == 2)
      cout << "Value  of x 2";
    if (x == 3)
      cout << "Value  of x 3";
  }
};
int main()
{
  A a1;
  int a, b, c;
  cout << "Enter 2 number : ";
  cin >> a >> b;
  try
  {
    if (a > 32)
    {
      throw "Error";
    }
  }
  catch (const char *s)
  {
    cout << s << endl;
  }
  try
  {
    if (b == 0)
    {
      throw a1;
    }
    if (b == 1)
    {
      throw a1;
    }
    if (b == 2)
    {
      throw a1;
    }
    if (b == 3)
    {
      throw a1;
    }
    c = a / b;
  }
  catch (class A a1)
  {
    a1.setData(b);
    a1.f1();
  }
  return 0;
}