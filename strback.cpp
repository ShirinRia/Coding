// C++ program to demonstrate
// the use of the above method
  
#include <iostream>
  
// for std::string::back
#include <string>
  
using namespace std;
  
int main()
{
    string str("GeeksforGeeks");
  
    // Accessing last character of string
    char end_char = str.back();
  
    cout << "Last character of string = "
         << end_char << endl;
  
    // Appending a character to
    // the end of string
    str.back() = '#';
  
    cout << "New string = " << str << endl;
  
    return 0;
}