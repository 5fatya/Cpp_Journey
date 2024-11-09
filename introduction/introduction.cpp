#include <iostream>
using namespace std; // standard library 

int main() {
  cout << "Hello World!" << "\n"; // cout is the printf version 

  int myNum = 15;
cout << myNum << "\n";  // prints the value of myNum

int myNum2;
myNum2 = 25;
cout << myNum2 << "\n";   // another way to prints the value of myNum


myNum = 10;  // Now myNum is 10
cout << myNum << "\n"; // Outputs 10

/*Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case-sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (like C++ keywords, such as int) cannot be used as names*/

int a = 5; 
    int b = 6; 
    int c;
    c = (a > b) ? a : b; // Assigns the greater of a and b to c
    cout << c; // Outputs the value of c
  return 0;
}