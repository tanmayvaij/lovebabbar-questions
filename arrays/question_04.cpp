/*

    ===> 
        Given an array which consists of only 0, 1 and 2. 
        Sort the array without using any sorting algo 
    <===

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

// Function for sorting the array of 0 1 2
void sort012(int arr[], int n) {

    // Counter for the numbers ( 0, 1, 2 )
    int n0 = 0, n1 = 0, n2 = 0;
    
    // Counting the occurences of the numbers ( 0, 1, 2 )
    for ( int i = 0; i < n; i++ ) {

        // Counting 0s
        if ( arr[i] == 0 ) n0++;

        // Counting 1s
        else if ( arr[i] == 1 ) n1++;

        // Counting 2s
        else n2++;

    }

    // Initialized counter 'k' for replacing numbers in array
    int k = 0;

    // Replaced n0 elements with 0
    while ( n0 > 0 ) {
        arr[k] = 0;
        k++;
        n0--;
    }

    // Replaced next n1 elements with 1
    while ( n1 > 0 ) {
        arr[k] = 1;
        k++;
        n1--;
    }

    // Replaced next n2 elements with 2
    while ( n2 > 0 ) {
        arr[k] = 2;
        k++;
        n2--;
    }

}

int main () {

    // Sample Array
    int arr[] = {0, 2, 1, 2, 0};

    // Size of Array
    int n = sizeof(arr) / sizeof(int);

    // Sort function called
    sort012(arr, n);

    // Printing the array
    printArray(arr, n);

    return 0;

}
