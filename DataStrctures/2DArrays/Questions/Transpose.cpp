#include <iostream>
using namespace std;

void transposeArr (int arr[3][3] , int rows , int cols , int newArr[3][3]) {
      for(int i = 0 ; i < rows ; i++) {
        for(int j=0 ; j < cols ; j++) {
            // swap(arr[i][j] ,arr[j][i]);
           newArr[j][i] = arr[i][j] ;
        }
    }
}

int main () {
    // Transpose means converting
    // 1 2 3
    // 4 5 6
    // 7 8 9   into

    // 1 4 7
    // 2 5 8
    // 3 6 9

    int arr[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};  
    int newArr[3][3];
    int rows = 3;
    int cols = 3;

    transposeArr(arr , rows , cols , newArr);

    for(int i = 0 ; i < rows ; i++) {
        for(int j=0 ; j < cols ; j++) {
            cout << newArr[i][j] << " " ;
        }
        cout << endl;
    }

}