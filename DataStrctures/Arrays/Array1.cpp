#include <iostream>
using namespace std;
int main()
{
    // int arr [5];
    // // or
    // int brr [5] = { 1,2,3,4,5};
    // arr[2] = 10;
    // cout << arr[2] << endl;

    // char ch [5] = {'a' , 'b' , 'c' , 'd' , 'e'};
    // cout << ch[2] << endl;

    // // Taking values and printing
    // for(int i = 0; i < 5 ; i++) {
    //     cin >> arr[i];
    // }

    // cout << "Prining values" << endl;

    //  for(int i = 0; i < 5 ; i++) {
    //     cout << arr[i] << " ";
    // }

    // print extream

    int arr[] = {1, 2, 3, 4, 5, 6, 7,8 ,9};
    int start = 0;
    int end = 8;

    // while (start <= end)
    // {
    //     if (start == end)
    //     {
    //         cout << arr[start] << endl;
    //     }
    //     else
    //     {
    //         cout << arr[start] << " " << arr[end] << endl;
    //     }
    //     start++;
    //     end--;
    // }

// reverse an array

while(start <= end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // swap(arr[start] , arr[end]);
    start++;
    end--;
}

for(int i = 0; i <= 7; i++) {
    cout << arr[i] << " ";
}

}
