/*

    ===> Find the maximum and minimum element in an array <===

*/

#include <iostream>
using namespace std;

// Function for finding min, max element of array 'arr'
pair<int, int> minMax(int arr[], int n) {

    // initialized min, max element to first element of array 'arr'
    int max = arr[0], min = arr[0];

    // finding min, max by comparing elements
    for ( int i = 1; i < n; i++ ) {

        if ( arr[i] > max ) max = arr[i];
        if ( arr[i] < min ) min = arr[i];

    }

    return {min, max};

}

int main () {

    // Sample Array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Size of array
    int n = sizeof(arr) / sizeof(int);

    // result of minMax() stored in pair p
    pair<int, int> p = minMax(arr, n);

    // printing min, max element i.e first and second element of pair p
    cout << "Minimum element:- " << p.first << endl;
    cout << "Maximum element:- " << p.second << endl;

    return 0;

}
