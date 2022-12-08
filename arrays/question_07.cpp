/*

    ===> Write a program to cyclically rotate an array by one. <===

*/

#include <iostream>
using namespace std;

// Utility function for printing array
void printArray(int arr[], int n) {

    for ( int i = 0; i < n; i++ ) {
        cout << arr[i] << " ";
    }

    cout << endl;

}

// Rotate function
void rotate(int arr[], int n) {

    // last element stored in elem
    int elem = arr[n-1];

    // shifting all the elements to one step right
    for ( int i = n-2; i >= 0; i-- ) arr[i+1] = arr[i];
    
    // placing the last element at first position
    arr[0] = elem;

}

int main () {
    
    // Sample Array
    int arr [] = {1, 2, 3, 4, 5};

    // Size of array
    int n = sizeof(arr) / sizeof(int);

    // Called rotate function
    rotate(arr, n);

    // Printing array
    printArray(arr, n);

    return 0;

}
