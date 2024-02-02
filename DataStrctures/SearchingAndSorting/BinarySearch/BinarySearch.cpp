#include <iostream>
using namespace std;

int findElement (vector <int> arr , int target) {
    int start = 0;
    int end = arr.size() -1;
    int mid = (start + end )/ 2;

    while (start <= end) {
        if(arr[mid] == target)  {
            return mid;
        } else if (target > arr[mid]) {
            start = mid+1;
        } else if(target < arr[mid]) {
            end = mid-1;
        }
        mid = (start + end) / 2;
    }
    return -1;
    
}

int main () {
    // Find a number using binary search
    vector <int> arr {1,3,5,12,13,15};
    int target =15;
    cout << findElement(arr, target) << " target";

   cout << binary_search(arr.begin(), 
              arr.end(), target) << " elem found" << endl; 
}