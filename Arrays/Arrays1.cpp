#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i = i + 1)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int findMax(int arr[], int size)
{
    // int max = arr[0]; // here we have to choose smallest number so we use INT_MIN
    int max = INT_MIN;
    for (int i = 0; i < 5; i = i + 1)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    cout << "Arrays 1" << endl;
    // int arr[5];
    // int a[53];
    // char ch[106];
    // bool b[23];
    // cout << arr << endl;  // to check the address
    // cout << &arr << endl; // to check the address
    // for(int i = 0 ; i < arr.length() ; i++) {
    //     cout << i << endl ;
    // }
    int arr[5] = {1, 2};
    cout << "first charcter" << arr[2] << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Lenear search

    // find element in an array
    int arr1[] = {1, 5, 3, 8, 7, 6};
    int size = 6;
    int key;
    cout << "Enter a number to search" << endl;
    cin >> key;

    int searchNum = binarySearch(arr1, size, key);
    cout << searchNum << endl;
    if (searchNum != -1)
    {
        cout << "Element Found at index " << searchNum << endl;
    }
    else
    {
        cout << "Element Not Found " << endl;
    }

    int arrM[] = {1, 2, 5, 7, 9};
    int sizee = 5;

    int maxNum = findMax(arrM, sizee);
    cout << "Maximum number is " << maxNum << endl;

    // Print extreme
    // int arry[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int sizy = 10;
    // int start = 0;
    // int end = sizy - 1;

    // while (start <= end)
    // {
    //     if (start == end)
    //     {
    //         cout << arry[start];
    //     }
    //     else
    //     {
    //         cout << arry[start] << " ";
    //         cout << arry[end] << " ";
    //     }
    //     start++;
    //     end--;
    // }

    // reverse the array

    int arry[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sizy = 10;
    int start = 0;
    int end = sizy - 1;

    while (start <= end) {
        swap(arry[start] , arry[end]);
        end--;
        start++;
    }

    for(int i = 0; i < sizy ; i++) {
        cout << arry[i] << " ";
    }
}