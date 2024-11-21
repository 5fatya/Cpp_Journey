#include <iostream>
using namespace std; 



int main(){

int arr[3][3] = {{2,4,5},{1,8,6},{1,1,9}}; // A 3x3 array named arr 
// Each row of the array is represented as {2, 4, 5}, {1, 8, 6}, and {1, 1, 9}.

for (int i = 0; i < 3; ++i) // The outer for loop iterates through the rows of the array
{
    for (int j = 0; j < 3; ++j) // The inner for loop iterates through the columns of each row.
{
    cout << arr[i][j] << " "; // Prints the value of arr[i][j] (element in row i and column j) followed by a space.

}
cout<<endl; // After all columns in a row are printed, this moves the cursor to the next line.
}

return 0;
}