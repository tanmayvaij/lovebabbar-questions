/*

    ===> Find the Union and Intersection of the two sorted arrays. <===

*/

#include <iostream>
#include <vector>
using namespace std;

// Utility function for printing vector
void printVector(vector<int> v) {

    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";

    cout << endl;

}

// Function for performing union of two arrays
vector<int> doUnion(vector<int> v1, vector<int> v2) {

    // vector for keeping a check on elements of both vectors
    vector<int> check(100001, 0);

    // this is the vector which will contain the final result of union
    vector<int> union_arr;

    // Incrementing at the position v1[i] in check vector
    for ( int i = 0; i < v1.size(); i++ ) check[v1[i]]++;

    // Incrementing at the position v2[i] in check vector
    for ( int i = 0; i < v2.size(); i++ ) check[v2[i]]++;

    // the index position in the check vector where elements are > 0 ( 1 or 2 ) are pushed into union_arr
    for ( int i = 0; i < check.size(); i++ ) if ( check[i] > 0 ) union_arr.push_back(i);

    // returning the union of the two arrays
    return union_arr;

}

// Function for performing intersection of two arrays
vector<int> doIntersection(vector<int> v1, vector<int> v2) {

    // vector for keeping a check on elements of both vectors
    vector<int> check(100001, 0);

    // this is the vector which will contain the final result of intersection
    vector<int> intersec_arr;

    // Incrementing at the position v1[i] in check vector
    for ( int i = 0; i < v1.size(); i++ ) check[v1[i]]++;

    // Incrementing at the position v2[i] in check vector
    for ( int i = 0; i < v2.size(); i++ ) check[v2[i]]++;

    // the index position in the check vector where elements are == 2 are pushed into intersec_arr
    for ( int i = 0; i < check.size(); i++ ) if ( check[i] == 2 ) intersec_arr.push_back(i);   

    // returning the union of the two arrays
    return intersec_arr; 

}

int main () {

    // Sample vector v1
    vector<int> v1 = { 1, 2, 3, 4, 5, 6 };

    // Sample vector v2
    vector<int> v2 = { 4, 5, 6, 7, 8, 9 };

    // called doUnion function. Result is stored in union_arr
    vector<int> union_arr = doUnion(v1, v2);

    // called doIntersection function. Result is stored in intersec_arr
    vector<int> intersec_arr = doIntersection(v1, v2);

    // Printing union_arr
    cout << "Union of arrays:- ";
    printVector(union_arr);

    // Printing intersec_arr
    cout << "Intersection of arrays:- ";
    printVector(intersec_arr);

    return 0;

}
