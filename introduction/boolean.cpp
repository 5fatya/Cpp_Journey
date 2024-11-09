/*
This assignment involves understanding Boolean expressions in C++. 
The program demonstrates Boolean comparisons using two integer variables, peanuts and people. It performs a series of tests:

Basic Comparisons: Checks if peanuts is greater than, less than, or equal to people.
Threshold Tests: Checks if peanuts is at least 1000 and if people is at most 500.
Math-Enhanced Tests: Combines Boolean logic with arithmetic to see if peanuts equals people * 10 or peanuts / 10 matches people.
Logical Combinations: Uses && and || to combine conditions and negate them.*/

#include <iostream>
 
using namespace std;

int main() {

   int peanuts = 1000;
    int people = 100;

    cout << "More " << peanuts << " peanuts and " << people << " people." << endl;

    bool test = peanuts > people;
    cout << "More peanuts than people? " << test << endl;

    test = peanuts < people;
    cout << "Less peanuts than people? " << test << endl;

    test = peanuts == people;
    cout << "Are peanuts equal to people? " << test << endl;

   // Check if the number of peanuts is 1000 or more
    test = peanuts >= 1000;
    cout << "Are there more peanuts or equal to 1000? " << test << endl;

    // Check if there are 500 or fewer people
    test = people <= 500;
    cout << "Are there fewer or equal people than 500? " << test << endl;

    // Negate the previous condition
    cout << "What if we not that? " << !test << endl;

    // Check if peanuts are exactly 10 times the number of people
    test = peanuts == people * 10;
    cout << "What about 10x the people? " << test << endl;

    // Check if 1/10th of peanuts equals the number of people
    bool tenth_peanuts = peanuts / 10 == people;
    cout << "Maybe 1/10th the peanuts? " << tenth_peanuts << endl;

    // Check if subtracting 100 peanuts equals the number of people
    bool less_peanuts = peanuts - 100 == people;
    cout << "If I eat 100 peanuts? " << less_peanuts << endl;

    // Check if both conditions (1/10th peanuts and 100 fewer peanuts) are true
    bool and_test = tenth_peanuts && less_peanuts;
    cout << "Are there 1/10th the peanuts of people\n\tAND are there the same number of people as peanuts - 100? " << and_test << endl;

    // Check if either condition (1/10th peanuts or 100 fewer peanuts) is true
    bool or_test = tenth_peanuts || less_peanuts;
    cout << "Same but either there's 1/10th peanuts OR peanuts minus 100? " << or_test << endl;


    return 0;
}

/*More 1000 peanuts and 100 people.
More peanuts than people? true
Less peanuts than people? false
Are peanuts equal to people? false
Are there more peanuts or equal to 1000? true
Are there fewer or equal people than 500? true
What if we not that? false
What about 10x the poeple? true
Maybe 1/10th the peanuts? true
If I eat 100 peanuts? false
Are there 1/10th the peanuts of people
 AND are there the same number of people as peanuts - 100? false
Same but either there's 1/10th peanuts OR peanuts minus 100? true*/