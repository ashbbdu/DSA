#include <iostream>
#include <vector>
using namespace std;

int findUniqueNumber (vector <int> arr) {
    int ans = 0;
    for(int i = 0; i < arr.size() ; i = i+1) {
        ans =  ans ^ arr[i];
    }
    return ans;
}

int main () {

    // Vector is a dynmaic array
    // vector <int> arr;
    // arr.push_back(5);
    // arr.push_back(6);
    // // cout << (sizeof(arr)/sizeof(int)) << endl;

    // cout << arr.size() << " " << arr.capacity() << endl;

    // for(int i = 0; i < arr.size() ; i++) {
    //     cout << arr[i] << " " ;
    // }

    // vector <int> crr;

    // cout << "Crr is empty or not " << crr.empty() << endl;

    //  for(int i = 0; i < crr.size() ; i++) {
    //     cout << crr[i] << " " ;
//    }
    // find unique element in an array

    int n;
    cout << "Enter the size of input" << endl;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter the elements" << endl;

    for(int i = 0 ; i < arr.size() ; i++) {
        cin >> arr[i];
    }


    int findUnique = findUniqueNumber(arr);
    cout << "Unique number is " << findUnique << endl;


}