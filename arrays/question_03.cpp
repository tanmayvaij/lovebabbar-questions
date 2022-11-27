/*

    ===> Find Kth max and min element of an array ( with distinct elements ) <===

*/

#include <iostream>
#include <algorithm>
using namespace std;

// Function to find kth min, max element in array 'arr'
pair <int, int> kthMinMax (int arr[], int k, int n) {

    // Sorted array 'arr' in ascennding order
    sort(arr, arr+n);

    // Returned kth element from begin, kth element from end   
    return { arr[k-1], arr[n-k] };

}

int main () {

    // Sample Array
    int arr[] = {7, 10, 4, 3, 20, 15, 1};

    // Size of array 'arr'
    int n = sizeof(arr) / sizeof(int);

    // Kth element
    int k = 3;

    return 0;

}
