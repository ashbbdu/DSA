#include <iostream>
using namespace std;

int main () {
        vector <int> arr {2,0,1};
    int start = 0;
    int end = arr.size() - 1;

    while(start <=  end) {
        if(arr[start] == 0) {
            start++;
        } else if(arr[end] == 2) {
            end--;
        } else {
            swap(arr[start] , arr[end]);
            start++;
            end--;
        }
    }

       cout << "Printint the array" << endl;
        for(int i =0 ;  i < arr.size() ; i++) {
        cout << arr[i] << " ";
    }
}