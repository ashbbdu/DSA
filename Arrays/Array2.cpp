#include <iostream>
#include <vector>
using namespace std;


int findMax (int arr[][4]) {
    int max = INT_MIN;
    for(int row = 0; row < 4 ; row = row + 1) {
        for(int col = 0; col < 4 ; col = col + 1){
            if(arr[row][col] > max) {
                max = arr[row][col];
            }
        }
    }
    return max;
}

int findMin (int arr[][4]){
    int min = INT_MAX;
    for(int row = 0; row < 4 ; row  = row + 1 ){
        for(int col  = 0 ; col < 4 ; col = col + 1){
            if(arr[row][col] < min) {
                min = arr[row][col];
            }
        }
    }
    return min;
}

void transpose (int arr[][4] , int transposedArr[][4]) {


    for(int row = 0; row < 4 ; row  = row + 1 ){
        for(int col  = 0 ; col < 4 ; col = col + 1){
            // swap(arr[row][col] , arr[col][row]);
           transposedArr[row][col] = arr[col][row];
        }
    }
}

int main()
{
    vector <int> arr {1,2,3,4};
    for(int i =0 ; i < arr.size() ; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    // arr.push_back(40);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // 2D arrays

    int brr[3][3];
    int crr[3][3] = {
        {1,2,3}, 
        {4,5,6}, 
        {6,7,8}
        };


    cout << crr[2][2] << endl;
    crr[2][2] = 19;
    cout << crr[2][2] << endl;


    // accessing elements of a 2D array row wise
//     int drr[3][3];
//     cout << "Enter arry elems" << endl; 

//        for(int row = 0 ; row < 3 ; row = row + 1) {
//         for(int col = 0 ; col < 3 ; col = col + 1) {
//            cin >> drr[row][col];
//         }
//     }

// cout << "Printing DRR" << endl;
//        for(int row = 0 ; row < 3 ; row = row + 1) {
//         for(int col = 0 ; col < 3 ; col = col + 1) {
//             cout << drr[row][col] << " ";
//         }
//         cout << endl;
//     }


    for(int row = 0 ; row < 3 ; row = row + 1) {
        for(int col = 0 ; col < 3 ; col = col + 1) {
            cout << crr[row][col] << " ";
        }
        cout << endl;
    }

   cout << endl;
      cout << endl;

   // accessing elements of a 2D array col wise

   for(int col = 0 ; col < 3 ; col = col + 1) {
        for(int row = 0 ; row < 3 ; row = row + 1) {
            cout << crr[row][col] << " ";
        }
        cout << endl;
    }


// Questions related to 2D Array


// Print the sum of rows

    int add[4][4] = {{1,2,3,4} , {5,6,0,8} ,{9,10,11,12} , {13,28,15,16}};

    int sum = 0;
     for(int row = 0 ; row < 4 ; row = row + 1) {
        for(int col = 0 ; col < 4 ; col = col + 1) {
            sum = sum + add[row][col];
        }
        cout << sum << " is the sum of row " << row << endl;
        sum = 0;
    }

    // cout << sum << " total sum"  << endl ;

    // Find max and min element in an array

    int maxElem = findMax(add);
    int minElem = findMin(add);
    cout << "Maximum element is " << maxElem <<  endl;
    cout << "Minimum element is " << minElem << endl;

    int transposedArr[4][4];

    transpose(add , transposedArr);



    cout << "Printing transposed Array" << endl;

    for(int row = 0 ; row < 4 ; row = row + 1) {
        for(int col = 0 ; col < 4 ; col = col + 1) {
            cout << transposedArr[row][col] << " " ;
        }
        cout << endl;
    }


    // Vector of Vector

    vector <vector <int> > ash;

    // How to push inside vector of vector

    vector <int> a{1,3,4};
    vector <int> b{5,6,7};
    vector <int> c{8,9,10};

    ash.push_back(a);
    ash.push_back(b);
    ash.push_back(b);

    cout << "Iterating over vector of vector" << endl;

    for(int row = 0 ; row < 3 ; row = row + 1) {
        for(int col = 0 ; col < 3 ; col = col + 1) {
            cout << ash[row][col] << " " ;
        }
        cout << endl;
    }
    



}