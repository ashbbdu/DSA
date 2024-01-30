#include <iostream>
using namespace std;

int findUnique (vector <int> arr) {
    int initialValue = 0;
    for(int i = 0 ; i < arr.size() ; i++) {
        initialValue = initialValue ^ arr[i];
    }
    return initialValue;
}


int main () {
         int n;
        cout << "Enter the size of array" <<  endl;
        cin >> n;
        vector <int> arr (n);

        cout << "Enter the values in an arrays" << endl;
        for(int i = 0 ; i < arr.size() ; i++ ) {
            cin >> arr[i];
        }
        
        int unique = findUnique(arr);
        cout << unique << " is the unique value" << endl;

}