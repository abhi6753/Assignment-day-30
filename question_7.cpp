//7. Write a C++ program to accept a username if the username has less than 6 character\
or does contain any digit or special symbol.
#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;
int main()
{
  int max = 100;
  char username[max];
  int isDigit = 0, isSpecialChar = 0, isChar = 0, isException = 0; // Flags or indicator
  cout << "Enter your username:" << endl;
  cin.getline(username, max);
  try
  {
    if (strlen(username) <= 6)
      throw 1;
    for (int i = 0; username[i]; i++)
    {
      if (isdigit(username[i]))
        isDigit = 1;
      if ((username[i] >= 65 && username[i] <= 90) || (username[i] >= 97 && username[i] <= 122))
        isChar = 1;
      else
        isSpecialChar = 1;
    }
    if (isDigit == 0)
      throw 2;
    if (isSpecialChar == 0)
      throw 3;
  }
  catch (int num)
  {
    if (num == 1)
      cout << "Username contain more than 6 characters" << endl;
    if (num == 2)
      cout << "Digit not found" << endl;
    if (num == 3)
      cout << "Special character not found" << endl;
    isException = 1;
  }
  if (!isException)
    cout << "Valid username" << endl;
  return 0;
}
