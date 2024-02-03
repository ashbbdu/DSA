#include <iostream>
using namespace std;

int main()
{
    vector<int> arr{4, 5, 1, 2, -1, 10};
    int n = arr.size();

    for(int i = 0; i < n -1 ; i++) {
        int minIndex = i;
        for(int j = i+1 ; j < n ; j++) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        // swap(arr[i] , arr[minIndex]);
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
    }



    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}