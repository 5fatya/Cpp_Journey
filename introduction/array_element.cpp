#include <iostream>
using namespace std;

int main(){

int arr_1[] = {2, 9, 6, 2, 3}; // Arr_1 is dynamically sized based on its initialization.
int arr_2[10] = {12, 66, 27, 32, 76, 49, 84};

// print element of arr_1
for (int i = 0; i < sizeof(arr_1) / sizeof(*arr_1); i++)
{
    cout << arr_1[i] << " ";

}

cout << endl;

// print elements of arr_2
for (int i = 0; i < sizeof(arr_2) / sizeof(*arr_2); i++) 
{
    cout << arr_2[i] << " ";
}


    return 0; 
}