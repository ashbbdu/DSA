#include <iostream>
using namespace std;

int findMaxElem (int arr[][3] , int rows , int cols) {
    int elem = INT_MIN;
    for(int i = 0 ; i < rows ; i++) {
        for(int j=0 ; j < cols ; j++) {
            if(arr[i][j] > elem) {
                elem = arr[i][j];
            }
        }
    }
    return elem;
}

int findMinElem (int arr[][3] , int rows , int cols) {
    int elem = INT_MAX;
    for(int i = 0 ; i < rows ; i++) {
        for(int j=0 ; j < cols ; j++) {
            if(arr[i][j] < elem) {
                elem = arr[i][j];
            }
        }
    }
    return elem;
}

int main () {
    int arr[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};
    int rows = 3;
    int cols = 3;
    int maxElem = findMaxElem(arr , rows , cols);
    cout << maxElem << " is the maximum elment" << endl;
    int minElem = findMinElem(arr , rows , cols);
    cout << minElem << " is the minimum elment" << endl;
}