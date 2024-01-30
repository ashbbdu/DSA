#include <iostream>
#include <vector>
using namespace std;

int findIndex(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int index = -1;

    while (start <= end)
    {
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return index;
}

int firstOccurance (vector <int> brr ,int target) {
    int start = 0;
    int end = brr.size() - 1;
    int mid = start + (end - start) / 2;
    int index = -1;

    while(start <= end) {
        if(target == brr[mid]) {
            index = mid;
            end = mid - 1;
        }
         else if (target < brr[mid])
        {
            end = mid - 1;
        }
        else if (target > brr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return index;
}


int lastOccurance (vector <int> brr ,int target) {
    int start = 0;
    int end = brr.size() - 1;
    int mid = start + (end - start) / 2;
    int index = -1;

    while(start <= end) {
        if(target == brr[mid]) {
            index = mid;
            start = mid + 1;
        }
         else if (target < brr[mid])
        {
            end = mid - 1;
        }
        else if (target > brr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return index;
}

int main()
{

    vector<int> arr{1, 4, 5, 7, 8};
    int target;
    cout << "Enter the number to search " << endl;
    cin >> target;
    int index = findIndex(arr, target);
    // cout << "Index of " << target << " " << index << endl;
    cout << index << endl;
    vector <int> brr {1,2,3,3,3,4,4,5,5,6,7};
    int targ = 3;
    int first = firstOccurance(brr , targ);
    cout << first <<  " first Occurance" << endl;

    int last = lastOccurance(brr , targ);
    cout << last << " last Occurance" << endl;

      cout << "Total number of occurance " <<  last - first + 1 << endl;
}