#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <cstddef>   // For size_t
#include <utility>  // swap function
using namespace std; 

struct A
{
int n; 
string s1; // the name of an object).

A() = default; 
A(A const&) = default; /*default copy constructor.
The copy constructor is used when you create a new object as a copy of an existing one.
For example, if you have A a1; and then write A a2 = a1;, the copy constructor is called.
It performs a shallow copy, copying each member (n and s1) from the source object to the new object.*/

A& operator=(A other) // operator is used when you assign one object to another after both have been created 
// such as a1 = a2;
{
cout << "copy assignment of A\n";

swap(n, other.n); // exchanges the values of n and s1 between the current object (*this) and other.
/*The swap() function exchanges the values of n and s1 between a1 and a2.*/
swap(s1, other.s1); // By creating a copy (other), we safely exchange the members without directly modifying the original data.
return *this; // It returns the current object after the assignment is complete.
   }
};
struct B : A {
string s2;
};

struct C 
{
unique_ptr<int[]> data; // unique_ptr is a smart pointer, used to manage dynamic memory (memory allocated with new).
/*int[] indicates that data is a pointer to a dynamic array of integers.
Instead of pointing to a single integer (int), it points to an array of integers.*/
size_t size; // size_t is an unsigned integer type that represents the size of an object or the length of an array.
// In this context, size stores the number of elements in the array pointed to by data 

C& operator=(const C& other) {
if (this != &other) { /*this function is called self assignment check 
The check this != &other ensures that the function does nothing if the object is being assigned to itself (e.g., c1 = c1;).
Why is this important? If you skip this check, the code might end up resetting the object’s data, causing loss of information.*/ 

            if (size != other.size) { /*Purpose: If the size of other is different from the current object’s size, 
 we need to reallocate memory to fit the new size.
data.reset(new int[other.size]);:
reset(): Deallocates the current memory managed by data and sets it 
to point to a new array of integers with size other.size.
new int[other.size]: Allocates a new array of integers on the heap.
size = other.size;: Updates the size member to reflect the new size.*/
                data.reset(new int[other.size]);
                size = other.size;
            }
            copy(&other.data[0], &other.data[0] + size, &data[0]); /*Purpose: Copies the elements from other.data to the current object’s data.
&other.data[0]: A pointer to the first element of other.data.
&other.data[0] + size: A pointer to one past the last element of other.data.
&data[0]: A pointer to the first element of the current object’s data.
std::copy() copies the elements from the range [&other.data[0], &other.data[0] + size) into the destination starting at &data[0].
*/
        }
        return *this; // Returns a reference to the current object (*this). This allows for chaining assignments. For example: c1 = c2 = c3;

    }
};

int main() {
    A a1, a2; // two objects of type A (a1 and a2) are created 
    cout << "a1 = a2 calls "; 
    a1 = a2; // Calls copy assignment operator of class A 

    B b1, b2; 
    b2.s1 = "foo";
    b2.s2 = "bar"; // the memeber s2 us copied directly because it is a string which supports copy assignment 
    cout << "b1 = b2 calls "; 
    b1 = b2; /*Implicit copy assignment operator for B, since B does not define its own copy assignment it uses the base class part (A's members) are copies using A's copy assignment operator*/ 
    cout << "b1.s1 = " << b1.s1 << "; b1.s2 = " << b1.s2 << '\n'; // foo and bar

    C c1, c2;
   c2.size = 3; // this function indicates that it will hold an array of 3 integers 
   c2.data = unique_ptr<int[]>(new int[c2.size]); /* unique_ptr is a smart pointer in C++ that manages dynamically allocated memory.
The type unique_ptr<int[]> means it manages a dynamic array of integers (int[]).
Unlike raw pointers, unique_ptr automatically frees the memory when it goes out of scope, preventing memory leaks.
   (new int [c2.size] his part creates a dynamic array of integers using new.
c2.size specifies the number of elements in the array.
For example, if c2.size is 3, then new int[3] creates an array of 3 integers, like this: [ 0, 0, 0 ]
   */
   c2.data[0] = 10; 
   c2.data[1] = 20;
   c2.data[2] = 30;

    c1 = c2; // Calls copy assignment operator for C

    cout << "c1 data: ";
    for (size_t i = 0; i < c1.size; ++i) {
        cout << c1.data[i] << " ";
    }
    cout << '\n';

    return 0;
}
