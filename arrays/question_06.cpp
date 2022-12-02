/*


*/

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {

    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " ";

    cout << endl;

}

vector<int> doUnion(vector<int> v1, vector<int> v2) {

    vector<int> check(100001, 0);

    vector<int> union_arr;

    for ( int i = 0; i < v1.size(); i++ ) check[v1[i]]++;

    for ( int i = 0; i < v2.size(); i++ ) check[v2[i]]++;

    for ( int i = 0; i < check.size(); i++ ) if ( check[i] > 0 ) union_arr.push_back(i);

    return union_arr;

}

vector<int> doIntersection(vector<int> v1, vector<int> v2) {

    vector<int> check(100001, 0);

    vector<int> intersec_arr;

    for ( int i = 0; i < v1.size(); i++ ) check[v1[i]]++;

    for ( int i = 0; i < v2.size(); i++ ) check[v2[i]]++;

    for ( int i = 0; i < check.size(); i++ ) if ( check[i] == 2 ) intersec_arr.push_back(i);   

    return intersec_arr; 

}

int main () {

    vector<int> arr1 = { 1, 2, 3, 4, 5, 6 };

    vector<int> arr2 = { 4, 5, 6, 7, 8, 9 };

    vector<int> union_arr = doUnion(arr1, arr2);

    vector<int> intersec_arr = doIntersection(arr1, arr2);

    cout << "Union of arrays:- ";
    printVector(union_arr);

    cout << "Intersection of arrays:- ";
    printVector(intersec_arr);

    return 0;

}
