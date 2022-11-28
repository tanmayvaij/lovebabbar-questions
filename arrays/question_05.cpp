/*

    ===> Move all negative elements to one side of an array <===

*/

#include <iostream>
#include <algorithm>
using namespace std;

// Utility function for printing array
void printArray(int arr[], int n) {

    for ( int i = 0; i < n; i++ ) {
        cout << arr[i] << " ";
    }

    cout << endl;

}

void move(int arr[], int n) {

    // Called sort function
    sort(arr, arr+n);

}

int main () {

    // Sample array
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};

    //Size of array
    int n = sizeof(arr) / sizeof(int);

    // Called move() function to move all negative elements to one side
    move(arr, n);

    // Printing array
    printArray(arr, n);

    return 0;

}
