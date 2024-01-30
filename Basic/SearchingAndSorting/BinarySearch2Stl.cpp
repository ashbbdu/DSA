#include <iostream>
#include <algorithm>
using namespace std;

int findPivot (vector <int> arr) {
    int start = 0;
    int end = arr.size() -1;
    int mid = start + (end - start)/2;

    while(start <= end) {
        if(mid + 1 < arr.size() && arr[mid] > arr[mid +1]){
            return mid;
        } 
        else if(mid - 1 >= 0 && arr[mid] < arr[mid-1]){
            return mid -1;
        }
        else if(arr[start] >= arr[mid]) {
            // left search
            end = mid -1;
        } 

          else if(arr[start] <= arr[mid]) {
             // right search
            start = mid + 1;
        } 

     mid = start + (end - start)/2;
        
    }
    return -1;
}

int main () {
    // vector <int> arr {1,2,3,4,5,6,7,8};
    // int brr[] = {1,2,3,4,5,6,7,8};
    // int size = 8;

    // int indexVector = binary_search(arr.begin() , arr.end() ,12);
    // int indexArr = binary_search(brr , brr + size , 7);
    // cout << "Index is (Vector) " <<  indexVector << endl;
    // cout << "Index is (Array) " <<  indexArr << endl;

    vector <int> arr {3,4,5,6,7,4,5,6,7,8,9};
    int pivot = findPivot(arr);
  cout << "Pivot element is " << arr[pivot] << pivot << endl;

}