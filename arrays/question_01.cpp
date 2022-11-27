/*

    ===> Reverse The Array <===

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

// Reverse array function
void reverseArray(int arr[], int n) {

    // Starting index of array 'arr'
    int st = 0; 

    // Last index of array 'arr'
    int en = n-1;

    // swapping elements in loop
    while ( st < en ) {

        int temp = arr[st];
        arr[st] = arr[en];
        arr[en] = temp;

        // Start pointer moved forward
        st++;

        // End pointer moved backward
        en--;

    }

}

int main () {

    // Sample Array
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // Size of array
    int n = sizeof(arr) / sizeof(int);

    // Array reversed
    reverseArray(arr, n);

    // Array printed
    printArray(arr, n);

    return 0;

}
