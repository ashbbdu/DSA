#include <iostream>
using namespace std;

int main () {
    vector <int> arr {1,2,-1,-1,4,-5,6};
    int start = 0;
    int end = arr.size() - 1;

    while(start <=  end) {
        if(arr[start] < 0) {
            start++;
        }
        else if(arr[end] > 0) {
            end--;
        } 
        else {
            swap(arr[start] , arr[end]);
            start++;
            end--;
        }
    }

    cout << "Printint the array" << endl;
    for(int i =0 ;  i < arr.size() ; i++) {
        cout << arr[i] << " ";
    }

    // move zeros to right and 1's to right

    vector <int> brr {1,1,0,1,0,0,1,0};
    int s = 0;
    int e = brr.size() -1;
    while(s <= e) {
        if(brr[s] == 0) {
            s++;
        } else if(brr[e] == 1) {
            e--;
        } else {
            swap(brr[s] , brr[e]);
            s++,
            e--;
        }
    }
      cout << "Printint the array" << endl;
    for(int i =0 ;  i < brr.size() ; i++) {
        cout << brr[i] << " ";
    }

}
