#include <iostream>
using namespace std;

int findFirstOccurance (vector <int> arr , int target) {
    int start = 0;
    int end = arr.size() - 1;
    int mid = (start + end)/2;
    int elem = -1;
    while(start <= end) {
        if(target ==  arr[mid]) {
            elem = mid;
            end--;
        } else if(target > arr[mid]) {
            start++;
        } else if(target < arr[mid]) {
            end--;
        }
        mid = (start + end)/2;
    }
    return elem;
}

int findLastOccurance (vector <int> arr , int target) {
    int start = 0;
    int end = arr.size() - 1;
    int mid = (start + end)/2;
    int elem = -1;
    while(start <= end) {
        if(target ==  arr[mid]) {
            elem = mid;
            start++;
        } else if(target > arr[mid]) {
            start++;
        } else if(target < arr[mid]) {
            end--;
        }
        mid = (start + end)/2;
    }
    return elem;
}

int main () {
    vector <int> arr {-2,-1,0,1,2,3,3,3,3,3,4,5,6};
    int target = 6;

    int answer = findFirstOccurance(arr , target);
    int lastAns = findLastOccurance(arr , target);
    cout << "Target's first and last occurance are at indexes : " << answer << " " << lastAns << endl;

    cout << "Total Number of occurance : " << (lastAns - answer) + 1 << endl;

}