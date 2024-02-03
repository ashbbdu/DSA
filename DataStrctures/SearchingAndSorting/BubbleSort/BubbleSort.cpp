#include <iostream>
using namespace std;

int main()
{
    vector<int> arr{4, 5, 1, 2, -1, 10 , -8 ,-9};
    int n = arr.size();
    for (int round = 0; round < n ; round++)
    {
        // second loop is for comparision
        for (int j = 0; j < n - (round + 1)  ; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
       
    }
     for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }


    
}