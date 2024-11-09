#include <iostream> 

using namespace std; // allows usage of standard library names without std:: prefix

int main() {

    int apples; // declares an integer variable named 'apples'

    apples = 20; // assigns the value 20 to 'apples'
    cout << "On Sunday I sold " << apples << " bushels of apples" << endl; // outputs the number of apples sold on Sunday

    apples = 15; // assigns the value 15 to 'apples'
    cout << "On Monday I sold " << apples << " bushels of apples" << endl; // outputs the number of apples sold on Monday

/*In C++ (like in C), a variable can be assigned multiple values throughout its lifetime. 
In your code, the variable apples is first assigned 20, then reassigned 15. The variable simply holds 
the most recent value assigned to it, so each assignment overwrites the previous value. */
    return 0; 
}
