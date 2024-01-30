#include <iostream>
using namespace std;

int findNumber(int arr[5], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {3, 4, 7, 8, 9};
    int size = 5;
    int key = 7;
    int find = findNumber(arr, size, key);
    if (find == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index " << find << endl;
    }


    cout << endl;
    // Count 0s and 1s

    int myArr[10] = {1,1,0,0,0,1,0,1,2,3};
    int totalZeros = 0;
    int totalOnes = 0;
    
    for(int i = 0; i < 8 ; i++) {
        if(myArr[i] == 0) {
            totalZeros++;
        } else if(myArr[i] == 1) {
            totalOnes++;
        }
    }   

    cout << "Total Zeros are " << totalZeros << " and Total Ones are " << totalOnes; 

        cout << endl;

    // find greatest number in an array
    int greatestNum = INT_MIN;
    for(int i =0 ; i < size ; i++) {
        if(arr[i] > greatestNum) {
            greatestNum = arr[i];
        }
    }
    cout << "Greatest Number is " << greatestNum << endl;


    // find minimum number in an array
    int smallestNum = INT_MAX;
     for(int i =0 ; i < size ; i++) {
        if(arr[i] < smallestNum) {
            smallestNum = arr[i];
        }
    }
    cout << "Smallest Number is " << smallestNum << endl;



    // print extreame
    cout << "Printn extreame" << endl;
    int ash[] = {1,2,3,4,5,6,7,8,9,10};
    int ashSize = 10;
    int start = 0;
    int end = ashSize -1;

    while(start <= end) {
        if(start == end) {
            // for odd case
              cout << ash[start] << " ";
        } else {
               cout << ash[start] << " ";
                cout << ash[end] << " ";
        }
     
        start++;
        end--;
    }

    cout << endl;
    // reverse an array
    int revArr[] = {4,5,6,7,8};
    int s = 0;
    int e = 4;  
    while(s <= e) {
        swap(revArr[s] , revArr[e]);
        s++;
        e--;
    }
    for(int i = 0 ;  i< 5; i++) {
        cout << revArr[i] << " ";
    }
}